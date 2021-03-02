#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main(void) {
   struct pred_s {
      int sifPred;
      char nazPred[40 + 1];
      int brStud;
   } predmet;
   int traziStud, sifStud, ocjena, sifPred;
   char ime[20 + 1], prez[20 + 1];
   printf("Upisite sifru > ");
   scanf("%d", &traziStud);
   FILE *ocjTok = fopen("ocjene.txt", "r");
   FILE *predTok = fopen("predmeti2.bin", "rb");
   bool pronadjeno = 0;
   
   while (fscanf(ocjTok, "%d %s %s %d %d", &sifStud, ime, prez, &sifPred,
                 &ocjena) == 5) {
      if (sifStud == traziStud) {
         if (pronadjeno == 0) {
            printf("%s %s je polozio/polozila:\n", ime, prez);
            pronadjeno = 1;
         }
         fseek(predTok, (long)(sifPred - 1000 - 1) * sizeof(predmet), SEEK_SET);
         fread(&predmet, sizeof(predmet), 1, predTok);
         if (predmet.sifPred == 0) {
            strcpy(predmet.nazPred, "?");
         }
         printf("%s (%d)\n", predmet.nazPred, ocjena);
      }
   }
   if (!pronadjeno) {
      printf("Nema polozenih predmeta\n");
   }
   fclose(ocjTok);
   fclose(predTok);
   return 0;
}
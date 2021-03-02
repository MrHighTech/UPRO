#include <stdio.h>
int main(void) {
   struct pred_s {
      int sifPred;
      char nazPred[40 + 1];
      int brStud;
   } predmet;
   int sifPred, brStud;
   FILE *ukupnoTok = fopen("ukupno.txt", "r");
   FILE *predTok = fopen("predmeti2.bin", "r+b");
   while (fscanf(ukupnoTok, "%d %d", &sifPred, &brStud) == 2) {
      fseek(predTok, (long)(sifPred - 1000 - 1) * sizeof(predmet), SEEK_SET);
      fread(&predmet, sizeof(predmet), 1, predTok);
      predmet.brStud = brStud;
      fseek(predTok, -1L * sizeof(predmet), SEEK_CUR);
      fwrite(&predmet, sizeof(predmet), 1, predTok);
   }
   fclose(ukupnoTok);
   fclose(predTok);
   return 0;
}
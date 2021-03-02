#include <stdio.h>

struct predmeti_s {
   int sifra;
   char naziv[40 + 1];
   int brojPolozenih;
};

int main(void) {
   FILE *ulTok = fopen("predmeti.txt", "r");
   FILE *prviIzlTok = fopen("predmeti1.bin", "wb");
   FILE *drugiIzlTok = fopen("predmeti2.bin", "wb");

   struct predmeti_s predmeti;
   predmeti.brojPolozenih = 0;
   while (fscanf(ulTok, "%d %[^\n]", &predmeti.sifra, predmeti.naziv) == 2) {
      fwrite(&predmeti, sizeof(predmeti), 1, prviIzlTok);
      fseek(drugiIzlTok, (long)(predmeti.sifra - 1001) * sizeof(predmeti),
            SEEK_SET);
      fwrite(&predmeti, sizeof(predmeti), 1, drugiIzlTok);
   }

   fclose(ulTok);
   fclose(prviIzlTok);
   fclose(drugiIzlTok);

   return 0;
}
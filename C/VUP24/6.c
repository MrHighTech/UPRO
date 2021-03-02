#include <stdio.h>

struct predmeti_s {
   int sifra;
   char naziv[40 + 1];
   int brojPolozenih;
};

int main(void) {
   FILE *ulTok = fopen("predmeti2.bin", "rb");

   struct predmeti_s predmeti;
   while (fread(&predmeti, sizeof(predmeti), 1, ulTok) == 1) {

      if (predmeti.sifra != 0) {
         printf("%d, %s, polozilo %d\n", predmeti.sifra + 1000, predmeti.naziv,
                predmeti.brojPolozenih);
      }
   }

   fclose(ulTok);

   return 0;
}
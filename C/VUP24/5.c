#include <stdio.h>

struct predmeti_s {
   int sifra;
   char naziv[40 + 1];
   int brojPolozenih;
};

int main(void) {
   FILE *ulTok = fopen("predmeti1.bin", "rb");

   struct predmeti_s predmeti;
   while (fread(&predmeti, sizeof(predmeti), 1, ulTok) == 1) {
      printf("%d, %s, polozilo %d\n", predmeti.sifra, predmeti.naziv,
             predmeti.brojPolozenih);
   }

   fclose(ulTok);

   return 0;
}
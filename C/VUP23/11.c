#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ZAPISI 50

int main(void) {
   FILE *tok = fopen("slucajni.bin", "wb");
   srand((unsigned)time(NULL));
   int n, broj, polje[8];
   for (int i = 1; i <= ZAPISI; i++) {
      n = rand() % (8 - 2 + 1) + 2;
      fwrite(&n, sizeof(n), 1, tok);
      for (int j = 0; j < n; j++) {
         broj = rand() % (160 - 150 + 1) + 150;
         polje[j] = broj;
      }
      fwrite(&polje[0], sizeof(broj), n, tok);
   }

   fclose(tok);
   return 0;
}
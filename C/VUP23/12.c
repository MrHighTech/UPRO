#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ZAPISI 50

int main(void) {
   FILE *tok = fopen("slucajni.bin", "rb");
   srand((unsigned)time(NULL));
   int n, broj, polje[8];
   for (int i = 1; i <= ZAPISI; i++) {
      fread(&n, sizeof(n), 1, tok);
      fread(&polje[0], sizeof(broj), n, tok);
      printf("%d ", n);
      for (int j = 0; j < n; j++) {
         printf("%3d ", polje[j]);
      }
      printf("\n");
   }

   fclose(tok);
   return 0;
}
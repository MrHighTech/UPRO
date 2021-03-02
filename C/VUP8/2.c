#include <stdio.h>
#define SLOJ 4
#define RED 3
#define STUPAC 6

int main(void) {
   int mat[SLOJ][RED][STUPAC], x = 100;
   for (int i = 0; i < SLOJ; i++) {
      printf("%d. sloj\n", i + 1);
      for (int j = 0; j < RED; j++) {
         for (int k = 0; k < STUPAC; k++) {
            printf("%5d", x + x * i + 10 * (j + 1) + k + 1);
         }
         printf("\n");
      }
      printf("\n");
   }
   return 0;
}
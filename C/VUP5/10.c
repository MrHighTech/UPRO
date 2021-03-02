#include <stdio.h>

int main(void) {
   int u, bin = 0, znamenka;
   scanf("%d", &u);
   if (u < 1 || u > 31) {
      printf("Broj znamenki je neispravan");
   } else {
      for (int i = 0; i < u; i++) {
         scanf("%d", &znamenka);
         bin = bin * 2 + znamenka;
      }
   }
   printf("%d", bin);
   return 0;
}
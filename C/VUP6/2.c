#include <stdio.h>
int main(void) {
   int n, k, br = 0;
   printf("Upisite broj > ");
   scanf("%d", &n);
   if (n >= 1 && n <= 10) {
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            if (i <= j) {
               br++;
               printf("%4d", br);
            } else {
               printf("    ", 0);
            }
         }
         printf("\n");
      }
   } else {
      printf("Broj je neispravan");
   }

   return 0;
}
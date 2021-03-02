#include <stdio.h>
int main(void) {
   int n;
   printf("Upisite red matrice > ");
   scanf("%d", &n);
   if (n >= 1 && n <= 10) {
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            if (i == j) {
               printf("%d ", 1);
            } else {
               printf("%d ", 0);
            }
         }
         printf("\n");
      }
   } else {
      printf("Red matrice je neispravan");
   }

   return 0;
}
#include <stdio.h>

int main(void) {
   int n, i, j, min;
   printf("Upisite broj N > ");
   scanf("%d", &n);

   float niz[n], pom;
   printf("Upisite realne brojeve (%d) > ", n);
   for (i = 0; i < n; i++) {
      scanf("%f", &niz[i]);
   }

   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++) {
         if (niz[j] < niz[min]) {
            min = j;
         }
      }
      if (i != min) {
         pom = niz[i];
         niz[i] = niz[min];
         niz[min] = pom;
      }
   }

   printf("Najveci = ");
   for (i = n - 1; i > n - 6; i--) {
      printf("%.1f ", niz[i]);
   }

   printf("\nNajmanji = ");
   for (i = 0; i < 5; i++) {
      printf("%.1f ", niz[i]);
   }
   return 0;
}
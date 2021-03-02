#include <stdio.h>

int main(void) {
   int n, i, j, naj;
   printf("Upisite broj redaka/stupaca matrice > ");
   scanf("%d", &n);
   int mat[n][n];

   printf("Upisite %dx%d clanova >\n", n, n);

   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   printf("Najvece vrijednosti stupaca su:\n");
   for (j = 0; j < n; j++) {
      naj = mat[0][j];
      for (i = 0; i < n; i++) {
         if (naj < mat[i][j]) {
            naj = mat[i][j];
         }
      }
      printf("%d ", naj);
   }

   printf("\nNajvece vrijednosti redaka su:\n");
   for (i = 0; i < n; i++) {
      naj = mat[i][0];
      for (j = 0; j < n; j++) {
         if (naj < mat[i][j]) {
            naj = mat[i][j];
         }
      }
      printf("%d ", naj);
   }

   return 0;
}
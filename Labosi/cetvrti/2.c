#include <stdio.h>

int main(void) {
   int n, i, j;
   printf("Upisite dimenziju matrice > ");
   scanf("%d", &n);

   printf("Upisite elemente matrice > ");
   int mat[n + 1][n];
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   for (j = 0; j < n; j++) {
      mat[i][j] = 0;
   }

   int brojac = 0;
   for (j = 0; j < n; j++) {
      brojac = 0;
      for (i = 0; i < n; i++) {
         brojac += mat[i][j];
      }
      if (brojac % 2 != 0) {
         mat[i][j] = 1;
      }
   }

   printf("Nova matrica:\n");
   for (i = 0; i <= n; i++) {
      for (j = 0; j < n; j++) {
         printf("%d ", mat[i][j]);
      }
      printf("\n");
   }
   return 0;
}
#include <stdio.h>

int main(void) {
   int n;
   printf("Unesie red matrice > ");
   scanf("%d", &n);

   int mat[n][n];
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("Upisite element [%d][%d] : ", i, j);
         scanf("%d", &mat[i][j]);
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (i == j) {
            mat[i][j] = 0;
            for (int k = 0; k < n; k++) {
               if (i != j) {
                  mat[i][j] += mat[i][k];
               }
            }
         }
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%3d", mat[i][j]);
      }
      printf("\n");
   }
   return 0;
}
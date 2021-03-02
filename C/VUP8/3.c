#include <stdio.h>

int main(void) {
   int m, n, najm, x;

   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);

   int mat[m][n];

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   for (int j = 0; j < n; j++) {
      najm = mat[0][j];
      printf("%d. stupac: ", j);
      for (int i = 0; i < m; i++) {
         if (mat[i][j] < najm) {
            najm = mat[i][j];
         }
      }
      x = 1;
      for (int i = 0; i < m; i++) {

         if (najm == mat[i][j]) {
            if (x == 1) {
               x = 0;
            } else {
               printf(", ");
            }
            printf("(%d, %d)", i, j);
         }
      }
      printf("\n");
   }
   return 0;
}
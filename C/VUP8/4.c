#include <stdio.h>

int main(void) {
   int m, n;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);

   int mat[m][n];
   printf("Upisite %d x %d clanova >\n", m, n);
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   printf("Nakon posmaka:\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (i + 1 < m) {
            printf("%4d", mat[i + 1][j]);
         } else {
            printf("%4d", mat[0][j]);
         }
      }
      printf("\n");
   }

   return 0;
}
#include <stdio.h>

int main(void) {
   int m, n;
   do {
      printf("Upisite m [4, 8] > ");
      scanf("%d", &m);
   } while (m < 4 || m > 8);

   do {
      printf("Upisite n [5, 10] > ");
      scanf("%d", &n);
   } while (n < 5 || n > 10);

   int mat[m][n];
   printf("Upisite %d x %d clanova >\n", m, n);
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   int sumaPoStupcima[n];
   printf("Sume po stupcima:\n");
   for (int j = 0; j < n; j++) {
      sumaPoStupcima[j] = 0;
      for (int i = 0; i < m; i++) {
         sumaPoStupcima[j] += mat[i][j];
      }
      printf("%5d", sumaPoStupcima[j]);
   }
   return 0;
}
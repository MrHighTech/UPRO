#include <stdio.h>

double zbroj2D(double *p, int br) {
   double zbroj = 0;
   for (int i = 0; i < br; i++) {
      zbroj += *(p + i);
   }
   return zbroj;
}

int main(void) {
   int m, n;

   printf("Upisite dimenzije: ");
   scanf("%d %d", &m, &n);

   double mat[m][n], zbroj;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++)
         scanf("%lf", &mat[i][j]);
   }

   zbroj = zbroj2D(mat[0], m * n);
   printf("Suma je: %lf", zbroj);
   return 0;
}
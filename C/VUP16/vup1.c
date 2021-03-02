#include <stdio.h>
#define REDAK 3
#define STUPAC 4

void sumeRedaka(int *pdp, int *pjp, int n, int m) {
   int i, j;
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         *(pjp + i) += *(pdp + m * i + j);
      }
   }
   return;
}

int main(void) {
   int mat[REDAK][STUPAC], rez[REDAK] = {0}, i, j;
   printf("Upisite clanove > ");

   for (i = 0; i < REDAK; i++) {
      for (j = 0; j < STUPAC; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   sumeRedaka(&mat[0][0], &rez[0], STUPAC, REDAK);

   for (i = 0; i < REDAK; i++) {
      printf("%d\n", rez[i]);
   }

   return 0;
}
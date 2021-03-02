#include <stdio.h>
#define N 11
int main(void) {
   int mat[N][N];
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
         if (i != j && (i != 0 && j != 0) && (i != N && j != N) &&
             (i != (N - j - 1))) {
            mat[i][j] = 8;
         } else {
            mat[i][j] = 1;
         }
      }
   }

   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
         printf("%2d", mat[i][j]);
      }
      printf("\n");
   }
   return 0;
}
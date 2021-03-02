#include <stdio.h>

void transpKvad(int *p, int br) {
   int pom;
   for (int i = 0; i < br - 1; i++) {
      for (int j = i + 1; j < br; j++) {
         pom = *(p + i * br + j);
         *(p + i * br + j) = *(p + i + j * br);
         *(p + i + j * br) = pom;
      }
   }
}

int main(void) {
   int red;
   printf("Upisite red matrice > ");
   scanf("%d", &red);
   int mat[red][red];

   printf("Upisite clanove >");
   for (int i = 0; i < red; i++) {
      for (int j = 0; j < red; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   transpKvad(mat[0], red);
   for (int i = 0; i < red; i++) {
      for (int j = 0; j < red; j++) {
         printf("%5d", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}
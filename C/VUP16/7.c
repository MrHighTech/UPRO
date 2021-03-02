#include <stdbool.h>
#include <stdio.h>

void zamjeni(int *x, int *y) {
   int pom;
   pom = *x;
   *x = *y;
   *y = pom;
   return;
}

void sortRetke2D(bool silazno, int redak, int stupac, int *polje) {
   int naj_indeks, i, j, k;
   for (i = 0; i < redak; i++) {
      for (j = 0; j < stupac - 1; j++) {
         naj_indeks = j + 1;

         for (k = j + 2; k < stupac; k++) {
            if (silazno) {
               if (*(polje + i * redak + k) > *(polje + i * redak + j)) {
                  naj_indeks = k;
               }
            } else {
               if (*(polje + i * redak + k) < *(polje + i * redak + j)) {
                  naj_indeks = k;
               }
            }
            zamjeni(polje + j, polje + naj_indeks);
         }
      }
   }
   return;
}

int main(void) {
   int m, n;
   char smjer;
   printf("Upisite smjer poretka (S-silazno) > ");
   scanf("%c", &smjer);
   printf("Upisite dimenzije > ");
   scanf("%d %d", &m, &n);

   int mat[m][n];
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }

   bool silazno = smjer == 'S' ? true : false;
   sortRetke2D(silazno, m, n, mat[0]);

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%5d", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}
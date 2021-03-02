#include <stdio.h>

void zamjeni(int *x, int *y) {
   int pom;
   pom = *x;
   *x = *y;
   *y = pom;
   return;
}

void sort1D(char smjer, int *dim, int duljina) {
   int i, j, naj;
   for (i = 0; i < duljina - 1; i++) {
      naj = i + 1;
      if (smjer = 'S') {
         for (j = i + 2; j < duljina; j++) {
            if (*(dim + j) > *(dim + i)) {
               naj = j;
            }
         }
         if (*(dim + naj) > *(dim + i)) {
            zamjeni(dim + naj, dim + i);
         }
      } else {
         for (j = i + 2; j < duljina; j++) {
            if (*(dim + j) > *(dim + i)) {
               naj = j;
            }
         }
         if (*(dim + naj) < *(dim + i)) {
            zamjeni(dim + naj, dim + i);
         }
      }
   }
   return;
}

int main(void) {
   int dim;
   char smjer;

   printf("Upisite smjer poretka (S-silazno) > ");
   scanf("%c", &smjer);

   printf("Upisite dimenziju > ");
   scanf("%d", &dim);

   int polje[dim];
   printf("Upsite clanove > ");
   for (int i = 0; i < dim; i++) {
      scanf("%d", &polje[i]);
   }

   sort1D(smjer, polje, dim);

   for (int i = 0; i < dim; i++) {
      printf("%d ", polje[i]);
   }

   return 0;
}
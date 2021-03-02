#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gadjajPolje(int *polje, int m, int n, int hitci) {
   int slucajniRedak, slucajniStupac;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         *(polje + n * i + j) = 0;
      }
   }
   for (int i = 0; i < hitci; i++) {
      slucajniRedak = rand() % m;
      slucajniStupac = rand() % n;
      ++*(polje + slucajniRedak * n + slucajniStupac);
   }
}

int main(void) {
   srand((unsigned)time(NULL));
   int m = rand() % (10 - 5 + 1) + 5, n = rand() % (20 - 10 + 1) + 10, hitci;
   printf("Upisite broj hitaca > ");
   scanf("%d", &hitci);
   int polje[m][n];

   gadjajPolje(polje[0], m, n, hitci);

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%4d", polje[i][j]);
      }
      printf("\n");
   }
   return 0;
}
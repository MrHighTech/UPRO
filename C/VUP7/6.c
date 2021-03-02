#include <stdio.h>

int main(void) {
   int n, brPar, brNep;
   do {
      printf("Upisite cijeli broj iz intervala [3, 20] > ");
      scanf("%d", &n);
   } while (n < 3 || n > 20);

   int polje[n];
   printf("Upisite cijele brojeve (%d) > ", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   for (int i = 0; i < n; i++) {
      if (polje[i] % 2 == 0) {
         brPar++;
      } else {
         brNep++;
      }
   }

   int poljePar[brPar];
   int poljeNep[brNep];

   for (int i = 0; i < n; i++) {
      if (polje[i] % 2
   }

   return 0;
}
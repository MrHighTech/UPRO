#include <stdio.h>

int *prviNegativac(int n, int *polje) {
   for (int i = 0; i < n; i++) {
      if (*(polje + i) < 0) {
         return polje + i;
      }
   }
   return NULL;
}

int main(void) {
   int n;
   printf("Upisite broj clanova polja > ");
   scanf("%d", &n);

   int polje[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   int *negativac;
   negativac = prviNegativac(n, polje);
   if (negativac == NULL) {
      printf("Nema negativnih");

   } else {
      printf("Prvi negativni je: %d", *negativac);
   }

   return 0;
}
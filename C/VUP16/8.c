#include <stdio.h>

int negativci(int n, int *polje, int *negPolje) {
   int nN = 0;
   for (int i = 0; i < n; i++) {
      if (*(polje + i) < 0) {
         *(negPolje + nN) = *(polje + i);
         nN++;
      }
   }
   return nN;
}

int main(void) {
   int n;
   printf("Upisite broj clanova polja > ");
   scanf("%d", &n);

   int polje[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   int neg[n], nadjenoNeg;
   nadjenoNeg = negativci(n, polje, neg);

   for (int i = 0; i < nadjenoNeg; i++) {
      printf("%d ", neg[i]);
   }
   return 0;
}
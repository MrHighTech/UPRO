#include <stdio.h>

int maks(int *p1, int *p2) {
   int rez;
   if (*p1 > *p2) {
      rez = *p1;
   } else {
      rez = *p2;
   }
   return rez;
}

int main(void) {
   int n, m;
   printf("Upisite dva cijela broja > ");
   scanf("%d %d", &n, &m);

   printf("Rezultat je %d", maks(&n, &m));
   return 0;
}
#include <stdio.h>
#define MAX_ZN 100

int main(void) {
   char niz[MAX_ZN + 1];
   int pozicija;
   printf("Upisite niz > ");
   fgets(niz, MAX_ZN + 1, stdin);

   printf("Upisite poziciju > ");
   scanf("%d", &pozicija);

   if (pozicija < 1 || pozicija > MAX_ZN + 1) {
      printf("Neispravna pozicija");
   } else {
      niz[pozicija - 1] = '\0';
      printf("%s", niz);
   }
   return 0;
}
#include <stdio.h>
#define MAX_ZN 20

int main(void) {
   char niz1[MAX_ZN + 1], niz2[MAX_ZN + 1];

   printf("Upisite 1. niz > ");
   fgets(niz1, MAX_ZN + 1, stdin);

   printf("Upisite 2. niz > ");
   fgets(niz2, MAX_ZN + 1, stdin);

   int i = 0, br1 = -1, br2 = -1;
   while (niz1[i] != '\0') {
      br1++;
      if (niz1[i] == '\n') {
         niz1[i] = '\0';
      }
      i++;
   }

   i = 0;
   while (niz2[i] != '\0') {
      br2++;
      if (niz2[i] == '\n') {
         niz2[i] = '\0';
      }
      i++;
   }

   int poz;
   printf("Upisite poziciju > ");
   scanf("%d", &poz);

   char noviniz[MAX_ZN];
   int br = 0;
   if (poz >= 1 && poz <= br1) {
      for (i = 0; i < br1 + br2; i++) {
         if (i + 1 < poz || i + 1 > br2 + poz) {
            noviniz[i] = niz1[i - br];
         } else {
            br++;
            noviniz[i] = niz2[i - poz + 1];
         }
      }
      printf("%s", noviniz);
   } else {
      printf("Neispravna pozicija");
   }

   return 0;
}
#include <stdio.h>
#define MAX_ZN 20

int main(void) {
   char niz1[MAX_ZN + 1], niz2[MAX_ZN + 1];

   printf("Upisite 1. niz > ");
   fgets(niz1, MAX_ZN + 1, stdin);

   printf("Upisite 2. niz > ");
   fgets(niz2, MAX_ZN + 1, stdin);

   int i = 0, j = 0, br1 = -1, br2 = -1;
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

   char noviniz[2 * MAX_ZN];
   for (i = 0; i < br1; i++) {
      noviniz[i] = niz1[i];
   }
   for (i = 0; i < br2; i++) {
      noviniz[i + br1] = niz2[i];
   }

   printf("%s", noviniz);

   return 0;
}
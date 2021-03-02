#include <stdio.h>
#define MAX_ZN1 50
#define MAX_ZN2 5

int main(void) {
   char niz1[MAX_ZN1 + 1], niz2[MAX_ZN2 + 1];

   printf("Upisite 1. niz > ");
   fgets(niz1, MAX_ZN1 + 1, stdin);

   printf("Upisite 2. niz > ");
   fgets(niz2, MAX_ZN2 + 1, stdin);

   int i = 0;
   while (niz1[i] != '\0') {
      if (niz1[i] == '\n') {
         niz1[i] = '\0';
      }
      i++;
   }

   i = 0;
   while (niz2[i] != '\0') {
      if (niz2[i] == '\n') {
         niz2[i] = '\0';
      }
      i++;
   }

   int j = 0;
   i = 0;
   while (niz1[i] != '\0') {
      j = 0;
      while (niz2[j] != '\0') {
         if (niz1[i] == niz2[j]) {
            niz1[i] -= 32;
            break;
         }
         j++;
      }
      i++;
   }

   printf("Novi 1. niz = %s", niz1);
   return 0;
}
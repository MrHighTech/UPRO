#include <stdio.h>
#define MAX_ZN 100

int main(void) {
   char niz[MAX_ZN + 1];
   int n;

   printf("Upisite niz > ");
   fgets(niz, MAX_ZN + 1, stdin);

   int i = 0;
   while (niz[i] != '\0') {
      if (niz[i] == '\n') {
         niz[i] = '\0';
      }
      i++;
   }

   printf("Upisite poziciju > ");
   scanf("%d", &n);

   if (niz[n - 1] == '\0') {
      printf("Neispravna pozicija");
   } else {
      for (i = MAX_ZN; i >= n - 1; i--) {
         if (niz[i] == '\0') {
            continue;
         } else {
            niz[i + 1] = niz[i];
         }
      }
      niz[n - 1] = 'X';
   }
   printf("%s", niz);
   return 0;
}
#include <stdio.h>
#define MAX 20

int main(void) {
   char samoglasnici[] = {'a', 'e', 'i', 'o', 'u'}, niz[MAX + 1];
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   int samog = 0, sug = 0, ostali = 0, i;
   printf("Niz: %s\n", niz);

   for (i = 0; i <= MAX; i++) {
      if (niz[i] == '\n') {
         niz[i] = '\0';
      }
   }
   i = 0;
   while (niz[i] != '\0') {
      if (niz[i] == samoglasnici[0] - 32 || niz[i] == samoglasnici[1] - 32 ||
          niz[i] == samoglasnici[2] - 32 || niz[i] == samoglasnici[3] - 32 ||
          niz[i] == samoglasnici[4] - 32 || niz[i] == samoglasnici[0] ||
          niz[i] == samoglasnici[1] || niz[i] == samoglasnici[2] ||
          niz[i] == samoglasnici[3] || niz[i] == samoglasnici[4]) {
         samog++;
      } else if ((niz[i] >= 'A' && niz[i] <= 'Z') ||
                 (niz[i] >= 'A' + 32 && niz[i] <= 'Z' + 32)) {
         sug++;
      } else {
         ostali++;
      }
      i++;
   }

   printf("Samoglasnika: %d\nSuglasnika: %d\nOstalih: %d", samog, sug, ostali);
   return 0;
}
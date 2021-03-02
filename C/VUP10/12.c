#include <stdio.h>
#define MAX_ZN 80
#define GG 'z'
#define DG 'a'

int main(void) {
   char niz[MAX_ZN + 1], abeceda[GG - DG];
   int i = 0;
   printf("Upisite niz > ");
   fgets(niz, MAX_ZN + 1, stdin);

   for (int i = 0; i < GG - DG; i++) {
      abeceda[i] = 0;
   }

   while (niz[i] != '\0') {
      if (niz[i] >= DG && niz[i] <= GG) {
         abeceda[niz[i] - DG]++;
      }
      i++;
   }

   for (i = 0; i < GG - DG; i++) {
      if (abeceda[i] > 0) {
         printf("Slovo %c pojavilo se %d puta\n", i + DG, abeceda[i]);
      }
   }

   return 0;
}
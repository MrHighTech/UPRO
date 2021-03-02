#include <stdio.h>
#define PRIM 500

int main(void) {
   int lista[PRIM], slobodanInd = 1, indPrim, kandidat = 3, prim;
   lista[0] = 2;
   while (slobodanInd < PRIM) {
      prim = 1;
      indPrim = 1;
      while (indPrim < slobodanInd && prim == 1) {
         if (kandidat % lista[indPrim] == 0) {
            prim = 0;
         }
         indPrim++;
      }
      if (prim) {
         lista[slobodanInd] = kandidat;
         slobodanInd++;
      }
      kandidat += 2;
   }

   for (int i = 0; i < PRIM; i++) {
      printf("%d. prim broj: %5d\n", i + 1, lista[i]);
   }
   return 0;
}
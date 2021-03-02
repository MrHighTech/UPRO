#include <stdio.h>

int main(void) {
   int unos, poz = 1, neg = -1, brpoz = 0, brneg = 0;
   printf("Unesite brojeve > ");
   do {
      scanf("%d", &unos);
      if (unos > 0) {
         brpoz += 1;
         if (unos > poz) {
            poz = unos;
         }
      } else if (unos < 0) {
         brneg += 1;
         if (unos < neg) {
            neg = unos;
         }
      }
   } while (unos != 0);

   if (brneg == 0) {
      printf("Nije upisan niti jedan negativni broj\n");
   } else {
      printf("Najmanji negativan = %d\n", neg);
   }

   if (brpoz == 0) {
      printf("Nije upisan niti jedan pozitivni broj\n");
   } else {
      printf("Najveći pozitivan = %d\n", poz);
   }
   return 0;
}
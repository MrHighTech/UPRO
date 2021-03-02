#include <stdio.h>

int main(void) {
   int bit, poz, n = 0;

   do {
      printf("Upisite bit i poziciju > ");
      scanf("%d %d", &bit, &poz);
      if (bit == 0 || bit == 1 && poz >= 0 && poz <= 31) {
         for (int i = 31; i >= 0; i--) {
            if (poz == i) {
               if (bit == 1) {
                  n |= 0x1 << i;
               } else{
                  n &= ~(0x1 << i);
               }
               n <<= i;
            }
            printf("%d", n >> i & 0x1);
         }
         printf(" (2) = %d (10)\n", n);
      } else {
         printf("Pogresna vrijednost ili pozicija bita");
      }
   } while (bit == 0 || bit == 1 && poz >= 0 && poz <= 31);

   return 0;
}
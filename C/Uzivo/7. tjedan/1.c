#include <stdio.h>

int main(void) {
   unsigned int n, bitovi = 0, bajtovi = 0;
   printf("Upisite broj > ");
   scanf("%u", &n);

   for (int i = 0; i < 8 * sizeof(unsigned); i++) {
      bitovi += ((n >> i) & 0x1) != 0;
   }

   for (int i = 0; i < sizeof(unsigned); i++) {
      bajtovi += (((n >> (i * 8)) & 0xff) == 0xff);
   }
   printf("%d, %d", bitovi, bajtovi);
   return 0;
}
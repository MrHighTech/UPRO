#include <stdio.h>
#define GORNJA_GR 1413

int main(void) {
   int br = 1;
   for (int a = 1; a <= GORNJA_GR; a++) {
      for (int b = 2; b <= GORNJA_GR; b++) {
         for (int c = 3; c <= GORNJA_GR; c++) {
            if (a * a + b * b == c * c) {
               printf("%d. trojka: %d^2 + %d^2 = %d^2\n", br, a, b, c);
               br++;
            }
         }
      }
   }
   return 0;
}
#include <stdio.h>

int main(void) {
   float sum = 0;
   for (int i = 1; i <= 1000; i++) {
      if (i % 2 == 0) {
         sum -= (1.f / (i * 1.f));
      } else {
         sum += (1.f / (i * 1.f));
      }
   }
   printf("%f", sum);
   return 0;
}
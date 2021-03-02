#include <math.h>
#include <stdio.h>
#define Gr_gran 1000

int main(void) {
   int a, b, c, br = 0, red = 0;
   for (a = 2; a < Gr_gran; a++) {
      for (b = a + 1; b <= Gr_gran; b++) {
         c = sqrt(a * a + b * b);
         if (a * a + b * b == c * c) {
            printf("%d. %d^2 + %d^2 = %d^2\n", red, a, b, c);
            red++;
         }
         br++;
      }
   }
   printf("Ispitano je %d brojeva", br);
   return 0;
}
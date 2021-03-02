#include <math.h>
#include <stdio.h>

int main(void) {
   int n, p[10] = {0}, prost, x;
   scanf("%d", &n);
   for (int i = 3; n > 0; i++) {
      prost = 1;
      for (int j = 2; j <= sqrt(i); j++) {
         if (i % j == 0) {
            prost = 0;
            break;
         }
      }
      if (prost == 1) {
         x = i;
         while (x != 0) {
            p[x % 10] += 1;
            x /= 10;
         }
         n--;
      }
   }

   for (int i = 0; i < 10; i++) {
      printf("\n%d ", i);
      for (int j = 0; j < p[i]; j++) {
         printf("#");
      }
      printf(" (%d)", p[i]);
   }
   return 0;
}
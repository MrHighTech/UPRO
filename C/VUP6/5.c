#include <stdio.h>

int main(void) {
   int n = 0, a = 2, dj = 0;
   while (n < 25) {
      dj = 0;
      for (int i = 1; i <= a; i++) {
         if (a % i == 0) {
            dj++;
         }
      }
      if (dj < 3) {
         printf("%d\n", a);
         n++;
      }
      a++;
   }
   return 0;
}
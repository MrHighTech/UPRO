#include <stdio.h>

int main(void) {
   int a = 1000, dj = 0;
   while (a < 10001) {
      dj = 0;
      for (int i = 1; i <= a; i++) {
         if (a % i == 0) {
            dj++;
            if (dj > 2)
               break;
         }
      }
      if (dj < 3) {
         printf("%d\n", a);
      }
      a++;
   }
   return 0;
}
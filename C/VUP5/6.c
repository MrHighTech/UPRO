#include <stdio.h>

int main(void) {
   int x = 1, ispisani = 1;
   while (ispisani <= 50) {
      if (x % 3 == 0 || x % 7 == 0) {
         if (ispisani > 1 && ispisani % 10 == 0) {
            printf("%d\n", x);
         } else {
            printf("%d, ", x);
         }
         ispisani++;
      }
      x++;
   }
   return 0;
}
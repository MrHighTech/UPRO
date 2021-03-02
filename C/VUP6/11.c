#include <stdio.h>
#define MAX_PO_RETKU 10

int main(void) {
   int n, l, br = 0, red = 0;
   scanf("%d", &n);
   l = n;
   do {
      if (red == MAX_PO_RETKU) {
         printf("\n");
         red = 0;
      }
      printf("%d ", n);
      if (n % 2 == 0) {
         n /= 2;
      } else {
         n = n * 3 + 1;
      }
      br++;
      red++;
   } while (n != 1);

   printf("\nZa n = %d, total stopping time = %d\n", l, br);
   return 0;
}
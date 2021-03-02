#include <stdio.h>
int main(void) {
   int x, y;
   scanf("%d %d", &x, &y);
   if ((x > y + 100) && ((y % 2 == 0) || (y < 0))) {
      printf("Istina je.");
   }
}
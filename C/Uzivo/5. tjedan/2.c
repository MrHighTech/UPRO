#include <stdio.h>

int main(void) {
   int m, n;
   do {
      printf("Unesite broj iz intervala [4, 10] > ");
      scanf("%d", &m);
   } while (m < 4 || m > 10);

   do {
      printf("Unesite broj iz intervala [2, 8] > ");
      scanf("%d", &n);
   } while (n < 2 || n > 8);

   
   return 0;
}
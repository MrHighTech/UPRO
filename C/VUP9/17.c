#include <stdio.h>

int main(void) {
   int n;
   printf("Upisite cijeli broj > ");
   scanf("%d", &n);
   char a = 'A';
   char z = 'Z';
   char nula = '0';
   char devet = '9';

   while ((n >= a && n <= z) || (n >= a + 32 && n <= z + 32) ||
          (n >= nula && n <= devet)) {
      printf("%d %c\n", n, n);
      printf("Upisite cijeli broj > ");
      scanf("%d", &n);
   }
   return 0;
}
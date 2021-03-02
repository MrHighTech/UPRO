#include <stdio.h>

int main(void) {
   unsigned int n;
   do {
      printf("Upisite heksadekadski nenegativni cijeli broj > ");
      scanf("%x", &n);
      printf("%8u\n", n);
   } while (n != 0);
   return 0;
}
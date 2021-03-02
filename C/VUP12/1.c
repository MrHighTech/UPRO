#include <stdio.h>

int main(void) {
   unsigned n;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &n);
   for (int i = 31; i >= 0; i--) {
      printf("%u", n >> i & 0x1);
   }
   printf(" (2)");
   return 0;
}
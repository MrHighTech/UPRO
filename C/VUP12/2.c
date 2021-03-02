#include <stdio.h>

int main(void) {
   unsigned n;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &n);

   for (int i = 30; i >= 0; i -= 3) {
      printf("%u", n >> i & 0x7);
   }

   printf(" (8)");
   return 0;
}
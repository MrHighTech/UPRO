#include <stdio.h>

int main(void) {
   unsigned n;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &n);

   unsigned znamenka;
    for (int i = 28; i >= 0; i -= 4) {
      znamenka = n >> i & 0xF;
      if (znamenka >= 0 && znamenka <= 9) {
         printf("%u", znamenka);
      } else {
         printf("%c", znamenka - 10 + 'A');
      }
   }

   printf(" (16)");
   return 0;
}
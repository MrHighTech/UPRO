#include <stdio.h>

int main(void) {
   int n, bin[31] = {0}, x = 0;
   printf("Upisite cijeli broj > ");
   scanf("%d", &n);
   do {
      bin[x] = n % 2;
      n /= 2;
      x++;
   } while (n > 0);

   for (int i = x - 1; i >= 0; i--) {
      printf("%d", bin[i]);
   }
   return 0;
}
#include <stdio.h>

int main(void) {
   int n;
   do {
      printf("Upisite dekadski cijeli broj > ");
      scanf("%d", &n);
      printf("%o\n", n);
      printf("%0x\n", n);
   } while (n != 0);
   return 0;
}
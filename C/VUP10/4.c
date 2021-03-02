#include <stdio.h>

int main(void) {
   unsigned int n;
   printf("Upisite dekadski broj > ");
   scanf("%u", &n);

   printf("Heksadekadski: %0X", n);
   return 0;
}
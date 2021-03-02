#include <stdio.h>

int main(void) {
   printf("Hello World!\n");
   int n;
   scanf("Unesi broj: %d", &n);
   n *= 10;
   printf("%d", n);
   return 0;
}
#include <stdio.h>
#define NIZ 40

int main(void) {
   int fib[NIZ] = {1, 1};
   for (int i = 2; i < NIZ; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
   }

   for (int i = 0; i < NIZ; i++) {
      printf("%d. clan: %d\n", i + 1, fib[i]);
   }
   return 0;
}
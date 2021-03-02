#include <stdbool.h>
#include <stdio.h>
#define N 40
static unsigned int fib, fib_minus1 = 1, fib_minus2 = 0;

int fibonacci(void) {

   fib = fib_minus1 + fib_minus2;
   fib_minus2 = fib_minus1;
   fib_minus1 = fib;
   return fib;
}

int main(void) {
   FILE *izlTok = fopen("fibonacci.bin", "wb");
   for (int i = 0; i < N; i++) {
      int broj = fibonacci(), *p1 = &broj;
      fwrite(p1, sizeof(int), 1, izlTok);
   }

   fclose(izlTok);
   return 0;
}
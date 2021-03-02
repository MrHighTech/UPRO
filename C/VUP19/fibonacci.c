#include "fibonacci.h"

static unsigned int f_minus_1, f_minus_2, brojac;

void resetFibonacci(void) {
   brojac = 0;
   f_minus_1 = 1;
   f_minus_2 = 1;
   return;
}

int getNextFibonacci(void) {
   int nextFib;
   brojac++;
   if (brojac <= 2) {
      nextFib = 1;
   } else {
      nextFib = f_minus_2 + f_minus_1;
      f_minus_2 = f_minus_1;
      f_minus_1 = nextFib;
   }
   return nextFib;
}
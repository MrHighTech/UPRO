#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GENERIRAJ 1000000
#define DONJAGR 50
#define GORNJAGR 60

int main(void) {
   int brojevi[GORNJAGR - DONJAGR + 1] = {0};
   srand((unsigned)time(NULL));
   for (int i = 0; i < GENERIRAJ; i++) {
      ++brojevi[rand() % (GORNJAGR - DONJAGR + 1)];
   }

   for (int i = 0; i < (GORNJAGR - DONJAGR + 1); i++) {
      printf("%d %6d\n", i + DONJAGR, brojevi[i]);
   }
   return 0;
}
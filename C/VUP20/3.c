#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GENERIRAJ 5000000
#define DONJAGR 10.0f
#define GORNJAGR 15.0f
#define BROJ_RAZREDA 10

int main(void) {
   srand((unsigned)time(NULL));

   int index, brojac[BROJ_RAZREDA] = {0};
   float slucajni;

   for (int i = 0; i < GENERIRAJ; i++) {
      slucajni =
          (float)rand() / (RAND_MAX + 1U) * (GORNJAGR - DONJAGR + 1) + DONJAGR;
      index = slucajni == GORNJAGR ? BROJ_RAZREDA - 1
                                   : (int)(slucajni * 2) - (int)(DONJAGR * 2);
      ++brojac[index];
   }

   for (int i = 0; i < BROJ_RAZREDA; i++) {
      printf("[%4.1f - %4.1f%c -> %7d\n", DONJAGR + i / 2.f,
             DONJAGR + (i + 1) / 2.f, i == BROJ_RAZREDA - 1 ? ']' : ')',
             brojac[i]);
   }
   return 0;
}
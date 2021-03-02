#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GENERIRAJ 1000

int main(void) {
   srand((unsigned)time(NULL));
   int slova = 0, znamenke = 0, ostalo = 0;
   char znak;
   for (int i = 0; i < GENERIRAJ; i++) {
      znak = (rand() % (126 - 32 + 1) + 32);
      if (isdigit(znak)) {
         znamenke++;
      } else if (isalpha(znak)) {
         slova++;
      } else
         ostalo++;
   }
   printf("Slova   : %4d\nZnamenke: %4d\nOstali  : %4d", slova, znamenke,
          ostalo);
   return 0;
}
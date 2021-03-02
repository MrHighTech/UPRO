#include "loto.h"
#include <stdio.h>

#define IZVLACENJA 10

int main(void) {
   for (int i = 0; i < IZVLACENJA; i++) {
      resetirajBubanj();
      printf("%2d. izvlacenje: ", i + 1);
      for (int j = 0; j < 7; j++) {
         printf("%3d ", dajSljedecuKuglicu());
      }
      printf("\n\n");
   }
   return 0;
}
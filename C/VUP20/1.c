#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int n;
   do {
      printf("Upisite n > ");
      scanf("%d", &n);
      if (!(n >= 3 && n <= 60)) {
         printf("Neispravan unos!");
      }
   } while (n < 3 && n > 60);

   srand((unsigned)time(NULL));

   int slucajni;
   char ascii;
   for (int i = 0; i < n; i++) {
      slucajni = rand();
      ascii = (double)slucajni / (RAND_MAX + 1U) * ('Z' - 'A' + 1) + 'A';
      // ili ovako:
      // ascii = slucajni % ('Z' - 'A' + 1) + 'A';
      printf("%c", ascii);
   }
   return 0;
}
#include <stdio.h>
#define MAX_IME 10

int main(void) {
   char rjec[MAX_IME + 1];
   printf("Upisite 10 znakova > ");
   fgets(rjec, MAX_IME + 1, stdin);
   printf("Original: %s\n", rjec);
   int ind, i, j;
   for (i = 0; i < MAX_IME - 1; i++) {
      ind = i + 1;
      for (j = i + 2; j < MAX_IME; j++) {
         if (rjec[j] < rjec[ind]) {
            ind = j;
         }
      }
      if (rjec[ind] < rjec[i]) {
         char pom = rjec[i];
         rjec[i] = rjec[ind];
         rjec[ind] = pom;
      }
   }

   printf("Sortirani: %s", rjec);
   return 0;
}
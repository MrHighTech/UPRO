#include <stdio.h>

int main(void) {
   int n, poz, suma = 0;
   scanf("%d", &n);
   if (n > 0) {
      poz = 0;
   } else {
      poz = 1;
   }

   while (n != 0) {
      if ((poz % 2 == 0 && n > 0) || (poz % 2 == 1 && n < 0)) {
         suma += n;
         poz++;
         scanf("%d", &n);
      } else {
         break;
      }
   }
   printf("Suma = %d", suma);
   return 0;
}
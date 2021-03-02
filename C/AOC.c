#include <stdio.h>

int main(void) {
   int n, sum = 0;
   printf("Ucitaj > ");
   scanf("%d", &n);
   do {
      sum += (n / 3 - 2);
      printf("Ucitaj > ");
      scanf("%d", &n);
   } while (n != 0);

   printf("%d", sum);
   return 0;
}
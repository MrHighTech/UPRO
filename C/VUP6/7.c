#include <math.h>
#include <stdio.h>

int main(void) {
   int n, djs2 = 0, dj = 0;
   printf("Unesite broj i provjerite ako je prost > ");
   scanf("%d", &n);
   if (n % 2 != 0) {
      djs2++;
   } else {
      printf("Nije prost");
   }

   if (djs2) {
      for (int i = 3; i < sqrt(n); i += 2) {
         if (n % i == 0) {
            dj++;
            printf("Nije prost");
            break;
         }
      }
      if (dj == 0) {
         printf("Prost je");
      }
   }

   return 0;
}
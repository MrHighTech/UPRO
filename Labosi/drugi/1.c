#include <stdio.h>

int main(void) {
   int a, b, pom, naj = 0;
   printf("Unesite dva broja > ");
   scanf("%d %d", &a, &b);
   if (a < b)
      pom = a;
   else
      pom = b;
   for (int i = 1; i <= pom; i++) {
      if (a % i == 0 && b % i == 0) {
         naj = i;
      }
   }
   printf("%d", naj);
   return 0;
}
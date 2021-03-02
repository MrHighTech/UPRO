#include <stdio.h>

int main(void) {
   int broj, pom, novi = 0, zn = 0;
   scanf("%d", &broj);
   pom = broj;
   while (pom != 0) {
      zn++;
      pom /= 10;
   }
   pom = broj;
   for (int i = 0; i < zn; i++) {
      novi = novi * 10 + pom % 10;
      pom /= 10;
   }

   if (novi == broj) {
      printf("Broj je palindrom");
   } else {
      printf("Broj nije palindrom");
   }
   return 0;
}
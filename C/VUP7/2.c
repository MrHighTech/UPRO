#include <stdio.h>

int main(void) {
   int lista[10], pom;
   printf("Upisite 10 cijelih brojeva > ");
   for (int i = 0; i < 10; i++) {
      scanf("%d", &lista[i]);
   }

   for (int i = 0; i < 5; i++) {
      pom = lista[i];
      lista[i] = lista[9 - i];
      lista[9 - i] = pom;
   }

   for (int i = 0; i < 10; i++) {
      printf("%d", lista[i]);
      if (i < 9) {
         printf(", ");
      }
   }
   return 0;
}
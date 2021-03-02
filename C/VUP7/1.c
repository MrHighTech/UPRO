#include <stdio.h>

int main(void) {
   int lista[10];
   printf("Upisite 10 cijelih brojeva > ");
   for (int i = 0; i < 10; i++) {
      scanf("%d", &lista[i]);
   }

   for (int i = 9; i >= 0; i--) {
      printf("%d", lista[i]);
      if (i > 0) {
         printf(", ");
      }
   }
   return 0;
}
#include <stdio.h>
#define MAX 10

int main(void) {
   for (int i = 1; i <= MAX; i++) {
      for (int j = 1; j <= MAX; j++) {
         printf("%2d  ", i * j);
         if (j == MAX) {
            printf("\n");
         }
      }
   }
   return 0;
}
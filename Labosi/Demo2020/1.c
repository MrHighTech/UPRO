#include <stdio.h>

int main(void) {
   int br;
   printf("Unesite broj > ");
   scanf("%d", &br);
   if (br > 0 && br < 100) {
      printf("je");
   } else {
      printf("nije");
   }
   return 0;
}
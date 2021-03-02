#include <stdio.h>

int main(void) {
   float br;
   int br2, ispis;
   printf("Upisite broj.");
   scanf("%f", &br);
   br2 = br * 100;
   if (br > 0) {
      if ((br2 % 100 >= 50)) {
         ispis = (int)(br) + 1;
         printf("%d", ispis);
      } else {
         ispis = (int)(br);
         printf("%d", ispis);
      }
   } else {
      if (br2 % 100 <= -50) {
         ispis = (int)(br)-1;
         printf("%d", ispis);
      } else {
         ispis = (int)(br);
         printf("%d", ispis);
      }
   }
}
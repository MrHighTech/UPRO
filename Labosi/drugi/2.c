#include <stdio.h>

int main(void) {
   int a, b, c;
   printf("Unesite duljine stranica > ");
   scanf("%d %d %d", &a, &b, &c);
   if ((a + b > c) && (a + c > b) && (b + c > a)) {
      if (a == b && a == c) {
         printf("Trokut je jednakostranican.");
      } else if (a == b || a == c || b == c) {
         printf("Trokut je jednakokracan.");
      } else if (a != b && a != c) {
         printf("Trokut je raznostranican.");
      }
   } else {
      printf("Trokut nije moguc.");
   }

   return 0;
}
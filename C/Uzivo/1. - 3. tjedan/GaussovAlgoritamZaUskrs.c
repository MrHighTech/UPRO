#include <stdio.h>

int main(void) {
   int god, a, b, c, d, e, x, y;
   printf("Upisite godinu za koju zelite saznati kada je Uskrs: ");
   scanf("%d", &god);

   if (god >= 1582 && god <= 1699) {
      x = 22;
      y = 2;
   } else if (god >= 1700 && god <= 1799) {
      x = 23;
      y = 3;
   } else if (god >= 1800 && god <= 1899) {
      x = 23;
      y = 4;
   } else if (god >= 1900 && god <= 2099) {
      x = 24;
      y = 5;
   } else {
      printf("Unesite godinu izmedu 1582. i 2099.");
   }

   a = god % 19;
   b = god % 4;
   c = god % 7;
   d = (a * 19 + x) % 30;
   e = (2 * b + 4 * c + 6 * d + y) % 7;

   if (d + e + 22 <= 31) {
      printf("Uskrs %d. godine pada na datum: %d.03.%d.", god, d + e + 22, god);
   } else {
      printf("Uskrs %d. godine pada na datum: %d.04.%d", god, d + e - 9, god);
   }
}
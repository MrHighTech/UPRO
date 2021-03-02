#include <stdio.h>

int main(void) {
   int a, b, temp;
   printf("Upisite dva cijela broja > ");
   scanf("%d %d", &a, &b);
   if (a == b) {
      printf("Brojevi su jednaki\n");
      printf("a = %d = b = %d", a, b);
   } else if (a > b) {
      printf("Zamjena je obavljena\n");
      temp = a;
      a = b;
      b = temp;
      printf("a = %d, b = %d", a, b);
   } else {
      printf("Zamjena nije obavljena\n a = %d, b = %d", a, b);
   }
   return 0;
}
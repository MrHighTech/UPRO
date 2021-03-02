#include <stdio.h>

int main(void) {
   char a, b, c;
   printf("Upisite dva znaka > ");
   scanf("%c %c", &a, &b);
   for (c = a; c <= b; c++) {
      printf("%c", c);
   }
   return 0;
}
#include <stdio.h>

int main(void) {
   float a, b, opseg;
   printf("Unesite duljinu stranice a: ");
   scanf("%f", &a);
   printf("Unesite duljinu stranice b: ");
   scanf("%f", &b);
   if ((a <= 0) || (b <= 0)) {
      printf("Unjeli ste neispravne brojeve.");
   } else {
      opseg = 2 * a + 2 * b;
      printf("Opseg pravokutnika je: %f", opseg);
   }
}
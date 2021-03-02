#include <stdio.h>

int main(void) {
   int kas, umor, simp = 0;
   float temp;
   printf("Upisite vasu temperaturu > ");
   scanf("%f", &temp);
   printf("Imate li suhi kasalj (0-nema, 1 - ima) > ");
   scanf("%d", &kas);
   printf("Imate li osjecaj umora (0-nema, 1 - ima) > ");
   scanf("%d", &umor);

   if (temp > 37.5) {
      simp++;
   }

   if (kas == 1) {
      simp++;
   }
   if (umor == 1) {
      simp++;
   }

   switch (simp) {
   case 0:
      printf("Nemate simptome zaraze");
      break;
   case 1:
      printf("Zanemariva vjerojatnost zaraze");
      break;
   case 2:
      printf("Mala vjerojatnost zaraze");
      break;
   case 3:
      printf("Velika vjerojatnost zaraze");
      break;
   default:
      printf("Krivo ste unjeli podatke");
      break;
   }
   return 0;
}
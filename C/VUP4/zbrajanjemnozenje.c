#include <stdio.h>

int main(void) {
   float x, y;
   int op;
   printf("Upisite dva realna broja > ");
   scanf("%f %f", &x, &y);
   printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) > ");
   scanf("%d", &op);
   switch (op) {
   case 1:
      printf("Zbroj je %f", x + y);
      break;
   case 2:
      printf("Umnozak je %f", x * y);
      break;
   default:
      printf("Neispravan odabir operacije");
      break;
   }
   return 0;
}
#include <stdio.h>

int main(void) {
   float x, y;
   scanf("%f %f", &x, &y);
   if (((x >= 5 || x <= 20) || (y >= 5 || y <= 20)) && (x < y)) {
      printf("Istina je.");
   } else
      printf("Nije istina.");
}
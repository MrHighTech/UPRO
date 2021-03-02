#include <stdio.h>

int main(void) {
   int unos;
   float temp, konTemp;
   printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.\n");
   printf("Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj >");
   scanf("%d", &unos);
   if (unos == 1) {
      printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit >");
      scanf("%f", &temp);
      konTemp = (temp - 32.f) * (5.f / 9.f);
      printf("%.3f st. F = %.3f st. C", temp, konTemp);
   } else {
      printf("Upisite temperaturu izrazenu u stupnjevima Celsius >");
      scanf("%f", &temp);
      konTemp = (temp * (9.f / 5.f)) + 32.f;
      printf("%.3f st. C = %.3f st. F", temp, konTemp);
   }
}
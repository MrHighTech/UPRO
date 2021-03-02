#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define GG 100.0
#define DG 1.0

float PiSuma(int n) {
   float suma = 0;
   int eksp = 2;
   for (int i = 1; i < 2*n; i += 2) {
      suma += pow((-1), eksp++) * (1.0/((float)i));
   }
   return suma * 4;
}

float Volumen(float d, int n) {
   float vol = (4. / 3.) * pow(d, 3) * PiSuma(n);
   return vol;
}

bool unutarGr(float n) {
   bool upit;
   if (n >= DG && n <= GG) {
      upit = true;
   } else {
      upit = false;
   }
   return upit;
}

int main(void) {
   int n;
   float d, rez, povred, povasin;

   printf("Upisite broj clanova reda > ");
   scanf("%d", &n);
   printf("Upisite promjer kugle > ");
   scanf("%f", &d);
   

   if (unutarGr(n) && unutarGr(d)) {
      d /= 2;
      povred = Volumen(d, n);
      povasin = 2 * asin(1.0) * 4 / 3 * pow(d, 3);
      rez = fabs(povasin - povred);
      printf("Volumen kugle (PI pomocu reda) > %.4f\n", povred);
      printf("Volumen kugle (PI pomocu asin) > %.4f\n", povasin);
      printf("Apsolutna razlika > %.4f\n", rez);
   } else {
      printf("Ucitani parametri nisu dobri!");
   }
   return 0;
}
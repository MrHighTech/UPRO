#include <stdio.h>

void zamjeni(double *p1, double *p2) {
   double pom;
   pom = *p1;
   *p1 = *p2;
   *p2 = pom;
   return;
}

void poredaj(double *p1, double *p2, double *p3) {
   if (*p1 > *p2) {
      zamjeni(p1, p2);
   }
   if (*p2 > *p3) {
      zamjeni(p2, p3);
   }
   if (*p1 > *p3) {
      zamjeni(p1, p3);
   }
   return;
}

int main(void) {
   double a, b, c;
   printf("Upisite tri realan broja > ");
   scanf("%lf %lf %lf", &a, &b, &c);

   poredaj(&a, &b, &c);
   printf("%.6lf %.6lf %.6lf", a, b, c);
   return 0;
}
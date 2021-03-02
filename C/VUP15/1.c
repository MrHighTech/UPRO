#include <math.h>
#include <stdio.h>

double korijeni(unsigned n, double *drugi, double *treci, double *peti) {
   *drugi = pow(n, 1. / 2.);
   *treci = pow(n, 1. / 3.);
   *peti = pow(n, 1. / 5.);
}

int main(void) {
   unsigned n;
   double a, b, c;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &n);

   korijeni(n, &a, &b, &c);

   printf("Rezultati su :\n%.8lf\n%.8lf\n%.8lf", a, b, c);
   return 0;
}
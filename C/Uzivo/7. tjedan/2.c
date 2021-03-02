#include <math.h>
#include <stdio.h>

double integralSinApprox(double a, double b, int n) {
   double w, x, sum = 0;
   w = (b - a) / n;
   x = a;
   for (int i = 1; i <= n; i++) {
      sum += sin(x + w / 2) * w;
   }
}
int main(void) {
   int n;
   double a, b;
   printf("Upisite a, b, n");
   scanf("%lf %lf %d", &a, &b, &n);

   return 0;
}
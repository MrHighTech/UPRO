#include <math.h>
#include <stdio.h>

int main(void) {
   double x = -12345.1234567;
   double rez1 = fabsf(x);
   double rez2 = fabs(x);
   printf("%14.7lf\n", rez1);
   printf("%14.7lf\n", rez2);
   return 0;
}
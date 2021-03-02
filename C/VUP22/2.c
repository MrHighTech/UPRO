#include <stdio.h>
int main(void) {
   char niz1[20], niz2[20];
   float x;
   double y;
   int m = -1, n = -1, r1, r2;
   r1 = scanf("%f %d %lf", &x, &m, &y); // 12.50 7 0.0
   r2 = scanf("%s %*c %s %d", niz1, niz2, &n); // Dva 2Tri 45
   printf("|%d|%d|\n", m, r1); // 7, 3
   printf("|%f|%lf|\n", x, y); // 12.500000 0.000000
   printf("|%s|\n", niz1); // Dva
   printf("|%s|\n", niz2); // 2Tri
   printf("|%d|%d|\n", n, r2); // 45, 3
   printf("|%c|", getchar()); // C
   return 0;
}
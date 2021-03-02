#include <math.h>
#include <stdio.h>

typedef struct {
   double x;
   double y;
} tTocka;

double udaljToc(tTocka *t1, tTocka *t2) {
   double udaljenost;
   udaljenost = sqrt(pow((t1->x - t2->x), 2) + pow((t1->y - t2->y), 2));
   return udaljenost;
}

int main(void) {
   tTocka t1, t2;
   printf("Upisite koordinate prve tocke > ");
   scanf("%lf %lf", &t1.x, &t1.y);

   printf("Upisite koordinate druge tocke > ");
   scanf("%lf %lf", &t2.x, &t2.y);

   double udaljenost = udaljToc(&t1, &t2);

   printf("%lf", udaljenost);
   return 0;
}
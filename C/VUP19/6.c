#include <stdio.h>
#define MAXNIZ 10
#define MAXTOC 5
typedef struct {
   double x;
   double y;
} tocka_t;
static tocka_t tocke[MAXTOC] = {{1., 1.}, {2., 2.}};
static tocka_t *pTocka = &tocke[0];
static char niz[10 + 1];
void f1(void) {
   char niz[MAXNIZ + 1] = "Ivan";
   printf("%s!\n", niz);
   niz[2] = 'e';
   niz[3] = 'k';
}
void f2(void) {
   niz[0] = 'Q';
   static char niz[MAXNIZ + 1] = "Ada";
   printf("%s!\n", niz);
   niz[0] = 'I';
}
void f3(void) {
   printf("%lf %lf\n", pTocka->x, pTocka->y);
   (++pTocka)->x++;
}
int main(void) {
   f1(); // Ivan! -> Ivek!
   printf("%s!\n", niz); // !
   f1(); // Ivan!
   f2(); // Ada! -> Ida!
   printf("%s!\n", niz); // Q
   f2(); // Ida!
   f3(); // 1 1
   f3(); // 3 2
   f3(); // 2 0
   return 0;
}
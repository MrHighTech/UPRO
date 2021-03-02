#include <stdio.h>
#define MAX 20

void brojiVelikaMala(char *niz, int *vel, int *mal) {
   while (*niz != '\0') {
      if (*niz >= 'A' && *niz <= 'Z') {
         ++*vel;
      } else if (*niz >= 'a' && *niz <= 'z') {
         ++*mal;
      }
      niz++;
   }
   return;
}

int main(void) {
   char niz[MAX + 1];
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   int vel = 0, mal = 0;
   brojiVelikaMala(niz, &vel, &mal);

   printf("Velikih: %d\nMalih: %d", vel, mal);
   return 0;
}
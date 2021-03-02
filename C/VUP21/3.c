#include <stdbool.h>
#include <stdio.h>

#define MAXZN 60

int brojPodnizova(char *s1, char *s2) {
   char *pocetakPotrage = s1;
   int brojac = 0;
   while ((pocetakPotrage = strstr(pocetakPotrage, s2)) != NULL) {
      ++brojac;
      ++pocetakPotrage;
   }
   return brojac;
}
void izbaciNR(char *niz) {
   while (*niz != '\0') {
      if (*niz == '\n' && *(niz + 1) == '\0') {
         *niz = '\0';
      }
      ++niz;
   }
   return;
}

int main(void) {
   char niz1[MAXZN + 1], niz2[MAXZN + 1];

   printf("Upisite 1. niz > ");
   fgets(niz1, MAXZN + 1, stdin);

   printf("Upisite 2. niz > ");
   fgets(niz2, MAXZN + 1, stdin);

   izbaciNR(niz1);
   izbaciNR(niz2);
   int brojPodn = brojPodnizova(niz1, niz2);
   printf("2. niz se u 1. nizu pojavljuje %d puta", brojPodn);
   return 0;
}
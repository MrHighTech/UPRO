#include <stdio.h>
#define MAX 20

void izbaciNR(char *pok) {

   do {
      if (*pok == '\n' && *(pok + 1) == '\0') {
         *pok = '\0';
      }
      pok++;
   } while (*pok != '\0');
   return;
}

void stvoriNoviNiz(char *niz1, char *niz2) {
   int duljina = 0, i;

   while (*(niz1 + duljina) != '\0') {
      duljina++;
   }

   for (i = 0; i < duljina; i++) {
      *(niz2 + duljina - i - 1) = *(niz1 + i);
   }
   *(niz2 + duljina) = '\0';

   return;
}

int main(void) {
   char niz[MAX + 1];
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   izbaciNR(niz);

   char niz2[MAX + 1];
   stvoriNoviNiz(niz, niz2);
   printf("Originalni: %s\nObrnuti: %s", niz, niz2);
   return 0;
}
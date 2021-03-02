#include <stdbool.h>
#include <stdio.h>
#define MAX 20

bool umetniZnak(char *niz, char znak, int poz) {
   int duljina = 0;
   bool uspjesno = 0;
   while (*(niz + duljina) != '\0') {
      duljina++;
   }
   if (poz >= 0 && poz <= duljina) {
      for (int i = duljina; i >= poz; i--) {
         *(niz + i + 1) = *(niz + i);
      }
      *(niz + poz) = znak;
      uspjesno = 1;
   }
   return uspjesno;
}

void izbaciNR(char *pok) {
   int i = 0;
   do {
      if (*(pok + i) == '\n' && *(pok + i + 1) == '\0') {
         *(pok + i) = '\0';
      }
      i++;
   } while (*(pok + i) != '\0');
   return;
}

int main(void) {
   char niz[MAX + 1], znak;
   int pozicija;
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   printf("Upisite znak > ");
   scanf("%c", &znak);

   printf("Upisite poziciju > ");
   scanf("%d", &pozicija);

   izbaciNR(niz);

   if (umetniZnak(niz, znak, pozicija))
      printf("%s", niz);
   else
      printf("Neispravna pozicija.");

   return 0;
}
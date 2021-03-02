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

void izbaciSamoglase(char *pok) {
   int i = 0, potroseno = 0;
   while (*(pok + i) != '\0') {
      if (*(pok + i) != 'a' && *(pok + i) != 'A' && *(pok + i) != 'e' &&
          *(pok + i) != 'E' && *(pok + i) != 'i' && *(pok + i) != 'I' &&
          *(pok + i) != 'o' && *(pok + i) != 'O' && *(pok + i) != 'u' &&
          *(pok + i) != 'U') {
         *(pok + potroseno++) = *(pok + i);
      }
      i++;
   }
   *(pok + potroseno) = '\0';
   return;
}
int main(void) {
   char niz[MAX + 1];
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   izbaciNR(niz);
   izbaciSamoglase(niz);
   printf("%s", niz);
   return 0;
}
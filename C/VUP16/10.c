#include <stdio.h>
#define MAX 20

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
   char niz[MAX + 1];
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   izbaciNR(niz);
   printf("%s!", niz);
   return 0;
}
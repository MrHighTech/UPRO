#include <stdio.h>
#define MAX 20

char *traziZadnjiZnak(char *niz, char znak) {
   char *zadnji = NULL;
   while (*niz != '\0') {
      if (*niz == znak) {
         zadnji = niz;
      }
      niz++;
   }
   return zadnji;
}

int main(void) {
   char niz[MAX + 1], znak, *pozicija = NULL;
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   printf("Upisite znak > ");
   scanf("%c", &znak);

   pozicija = traziZadnjiZnak(niz, znak);

   if (pozicija == NULL) {
      printf("U nizu nema zadanog znaka");
   } else {
      printf("%d", pozicija - niz);
   }
   return 0;
}
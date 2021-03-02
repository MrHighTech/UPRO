#include <stdio.h>
#define MAX 20

char *traziPrviSamoglas(char *niz) {
   char *pom = NULL;
   while (*niz != '\0') {
      if (*niz == 'a' || *niz == 'e' || *niz == 'i' || *niz == 'o' ||
          *niz == 'u' || *niz == 'A' || *niz == 'E' || *niz == 'I' ||
          *niz == 'O' || *niz == 'U') {
         pom = niz++;
         break;
      }
   }
   return pom;
}

int main(void) {
   char niz[MAX + 1], *inv;
   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);
   for (int i = 0; i < 20; i++) {
      *inv = traziPrviSamoglas(niz);
      if (!(inv == NULL)) {
         printf("%c", *inv);
      }
   }

   return 0;
}
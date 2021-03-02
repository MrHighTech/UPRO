#include <stdio.h>
#include <string.h>
#define MAXZN 60

void izbaciNR(char *niz) {
   while (*niz != '\0') {
      if (*niz == '\n' && *(niz + 2) == '\0') {
         *niz = '\0';
      }
      ++niz;
   }
   return;
}

int main(void) {
   char niz1[MAXZN + 1], niz2[MAXZN + 1], niz3[MAXZN + 1],

       printf("Upisi 1. niz > ");
   fgets(niz1, MAXZN + 1, stdin);

   printf("Upisi 2. niz > ");
   fgets(niz2, MAXZN + 1, stdin);

   printf("Upisi 3. niz > ");
   fgets(niz3, MAXZN + 1, stdin);
   izbaciNR(niz1);
   izbaciNR(niz2);
   izbaciNR(niz3);

   char *p1 = niz1, *p2 = niz2, *p3 = niz3, *pom = NULL;
   if (strcmp(p1, p2) > 0) {
      pom = p1;
      p1 = p2;
      p2 = pom;
   }
   if (strcmp(p1, p3) > 0) {
      pom = p1;
      p1 = p3;
      p3 = pom;
   }
   if (strcmp(p2, p3) > 0) {
      pom = p2;
      p2 = p3;
      p3 = pom;
   }
   printf("%s\n%s\n%s", p1, p2, p3);
   return 0;
}
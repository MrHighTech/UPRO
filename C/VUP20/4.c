#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DULJINA 60

void izbaciNR(char *niz) {
   while (*niz != '\0') {
      if (*niz == '\n' && *(niz + 1) == '\0') {
         *niz = '\0';
      }
      niz++;
   }
   return;
}

void genText(char *ulaz, char *rezultat, int duljina) {
   static bool started = 0;
   if (!started) {
      srand((unsigned)time(NULL));
      started = 1;
   }
   int duljinaUlaz = 0;
   while (*(ulaz + duljinaUlaz) != '\0') {
      ++duljinaUlaz;
   }

   int i;
   for (i = 0; i < duljina; i++) {
      *(rezultat + i) = *(rand() % duljinaUlaz + ulaz);
   }
   *(rezultat + i) = '\0';
   return;
}

int main(void) {
   char niz[DULJINA + 1];
   int n;

   printf("Upisite niz > ");
   fgets(niz, DULJINA + 1, stdin);
   printf("Upisite duljinu generiranog niza > ");
   scanf("%d", &n);

   izbaciNR(niz);
   char randniz[n + 1];

   for (int i = 0; i < 3; ++i) {
      genText(niz, randniz, n);
      printf("%s\n", randniz);
   }

   return 0;
}
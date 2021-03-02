#include <ctype.h>
#include <stdio.h>
#define MAX_ZN 100

int brojiSamoglasnike(char *imeDatoteke) {
   int brojac = 0, slovo;
   FILE *ulTok = fopen(imeDatoteke, "r");

   if (ulTok != NULL) {
      while (slovo = fgetc(ulTok) != EOF) {
         slovo = toupper(slovo);
         if (slovo == 'A' || slovo == 'E' || slovo == 'I' || slovo == 'O' ||
             slovo == 'U') {
            brojac++;
         }
      }
      fclose(ulTok);
   } else {
      brojac = -1;
   }
   return brojac;
}

int main(void) {
   char path[MAX_ZN + 1];
   printf("Upisite kompletan put do datoteke > ");
   scanf("%s", path);

   int br = brojiSamoglasnike(path);

   if (br == -1) {
      printf("Nije uspjelo otvaranje datoteke %s", path);
   } else {
      printf("Broj samoglasnika u datoteci %s je %d", path, br);
   }
   return 0;
}
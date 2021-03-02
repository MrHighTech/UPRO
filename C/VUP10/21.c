#include <stdio.h>
#define OSOBA 10
#define MAX_ZN 30

int main(void) {
   struct osoba_s {
      char ime[MAX_ZN + 1];
      char prezime[MAX_ZN + 1];
   };
   int i = 0, kAnA;

   struct osoba_s podaci[OSOBA];
   for (i = 0; i < OSOBA; i++) {
      printf("%d. Ime > ", i + 1);
      fgets(podaci[i].ime, MAX_ZN + 1, stdin);
      k = 0;
      while (podaci[i].ime[k] != '\0') {
         if (podaci[i].ime[k] == '\n') {
            podaci[i].ime[k] = '\0';
         }
         k = k + 1;
      }

      printf("%d. Prezime > ", i + 1);
      fgets(podaci[i].prezime, MAX_ZN + 1, stdin);
      k = 0;
      while (podaci[i].prezime[k] != '\0') {
         if (podaci[i].prezime[k] == '\n') {
            podaci[i].prezime[k] = '\0';
         }
         k = k + 1;
      }
   }

   for (i = OSOBA - 1; i >= 0; i--) {
      printf("%s, %s\n", podaci[i].prezime, podaci[i].ime);
   }
   return 0;
}
#include <stdio.h>
#define MAX_ZN 20
struct studenti_s {
   char jmbag[10 + 1], ime[MAX_ZN + 1], prezime[MAX_ZN + 1];
   float bodovi;
};

typedef struct studenti_s studosi;

int main(void) {
   FILE *tok = fopen("bodovi.txt", "r");

   studosi studenti;
   int brojac = 0;
   float prosjek = 0;
   while (fscanf(tok, "%s %s %s %f", studenti.jmbag, studenti.ime,
                 studenti.prezime, &studenti.bodovi) == 4) {
      prosjek += studenti.bodovi;
      brojac++;
   }
   prosjek /= (float)brojac;
   fseek(tok, 0L, SEEK_SET);

   while (fscanf(tok, "%s %s %s %f", studenti.jmbag, studenti.ime,
                 studenti.prezime, &studenti.bodovi) == 4) {
      if (studenti.bodovi > prosjek) {
         printf("%s %s %s %.1f\n", studenti.jmbag, studenti.ime,
                studenti.prezime, studenti.bodovi);
      }
   }
   return 0;
}
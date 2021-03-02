#include <stdio.h>
#include <string.h>
#define MAX_ZN 20

struct studenti_s {
   int rbr;
   char ime[MAX_ZN + 1], prezime[MAX_ZN + 1];
   int dan, mj, god;
};

int main(void) {
   struct studenti_s stud;
   FILE *ulTok = fopen("osobe.txt", "r");

   while (fscanf(ulTok, "%d%s%s%*d.%*d.%d", &stud.rbr, stud.ime, stud.prezime,
                 &stud.god) == 4) {
      if (strstr(stud.ime, "na") || stud.god == 1987) {
         printf("%d %s %s\n", stud.rbr, stud.ime, stud.prezime);
      }
   }
   fclose(ulTok);

   return 0;
}
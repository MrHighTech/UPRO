#include <stdio.h>
#include <string.h>
#define MAX_NAZIV 60

int main(void) {
   FILE *ulTok = fopen("filmovi.txt", "r");
   FILE *drama = fopen("drama.txt", "w");
   FILE *sf = fopen("SF.txt", "w");
   FILE *komedija = fopen("komedija.txt", "w");
   FILE *izlTok = NULL;

   char naziv[MAX_NAZIV + 1], zanr[MAX_NAZIV + 1];
   int godina;
   while (fscanf(ulTok, " %[^|]|%[^|]|%d", naziv, zanr, &godina) == 3) {
      if (strcmp(zanr, "drama") == 0) {
         izlTok = drama;
      } else if (strcmp(zanr, "komedija") == 0) {
         izlTok = komedija;
      } else if (strcmp(zanr, "SF") == 0) {
         izlTok = sf;
      }
      fprintf(izlTok, "%s, %d", naziv, godina);
   }
   fclose(ulTok);
   fclose(komedija);
   fclose(drama);
   fclose(sf);
   return 0;
}
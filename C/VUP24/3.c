#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BRSLUCAJNIH 40

int main(void) {
   srand((unsigned)time(NULL));

   FILE *tok = fopen("slova.bin", "rb");
   long slucajanBroj;
   char znak;
   for (int i = 0; i < BRSLUCAJNIH; i++) {
      slucajanBroj = rand() % 70;
      fseek(tok, slucajanBroj, SEEK_SET);
      fread(&znak, sizeof(char), 1, tok);

      printf("%c\n", znak);
      if (znak == 'X') {
         break;
      }
   }

   fclose(tok);
   return 0;
}
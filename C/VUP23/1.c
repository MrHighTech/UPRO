#include <ctype.h>
#include <stdio.h>

int main(void) {
   FILE *tok = fopen("D:/FER/1. semestar/UPRO/C/ulaz.txt", "r");
   int znak;
   while ((znak = fgetc(tok)) != EOF) {
      putchar(toupper(znak));
   }
   fclose(tok);
   return 0;
}
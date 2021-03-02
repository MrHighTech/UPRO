#include <stdio.h>

int main(void) {
   FILE *dat = fopen("slova.bin", "wb");

   for (char i = 'A'; i <= 'Z'; i++) {
      fwrite(&i, sizeof(i), 1, dat);
   }

   for (char i = 'a'; i <= 'z'; i++) {
      fwrite(&i, sizeof(i), 1, dat);
   }

   for (char i = '0'; i <= '9'; i++) {
      fwrite(&i, sizeof(i), 1, dat);
   }

   fclose(dat);
   return 0;
}
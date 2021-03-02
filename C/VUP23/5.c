#include <stdio.h>

int main(void) {
   float broj;
   float ukupno = 0.f;
   int br = 0;
   FILE *dat = fopen("brojevi.txt", "r");

   while (fscanf(dat, "%f", &broj) == 1) {
      ukupno += broj;
      br++;
   }
   fclose(dat);

   if (br > 0) {
      printf("%f", ukupno / (float)br);
   } else {
      printf("Nije ucitan ni jedan broj!\n");
   }
   return 0;
}
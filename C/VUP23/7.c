#include <stdio.h>

int main(void) {
   int dan, brojMjerenja;
   float suma = 0;
   FILE *ulTok = fopen("mjerenja.txt", "r");

   while (fscanf(ulTok, "#%d#%d", &dan, &brojMjerenja) == 2) {
      float temp;
      for (int i = 0; i < brojMjerenja; i++) {
         fscanf(ulTok, "#%*d#%f ", &temp);
         suma += temp;
      }
      printf("Dan = %3d, Broj mjerenja= %2d, Prosjek= %7.2f\n", dan,
             brojMjerenja, temp / brojMjerenja);
   }
   fclose(ulTok);
   return 0;
}
#include <stdio.h>

int main(void) {
   int n;
   struct pretinac_s {
      int sifra;
      int visina;
      int sirina;
      int dubina;
      float volumen;
   };

   printf("Upisite broj pretinaca > ");
   scanf("%d", &n);
   struct pretinac_s pretinci[n];

   printf("Upisite podatke za pretince (%d)\n", n);
   for (int i = 0; i < n; i++) {
      printf("%d. pretinac > ", i + 1);
      scanf("%d %d %d %d", &pretinci[i].sifra, &pretinci[i].visina,
            &pretinci[i].sirina, &pretinci[i].dubina);
      pretinci[i].volumen = (float)pretinci[i].visina * pretinci[i].sirina *
                            pretinci[i].dubina / 1000;
   }

   int ind_max;
   struct pretinac_s pomocni;
   for (int i = 0; i < n - 1; i++) {
      ind_max = i + 1;
      for (int j = i + 2; j < n; j++) {
         if (pretinci[ind_max].volumen < pretinci[j].volumen) {
            ind_max = j;
         }
      }
      if (pretinci[ind_max].volumen > pretinci[i].volumen) {
         pomocni = pretinci[i];
         pretinci[i] = pretinci[ind_max];
         pretinci[ind_max] = pomocni;
      }
   }

   printf("Sortirani pretinci:\n");
   for (int i = 0; i < n; i++) {
      printf("%d = %6.2f litara\n", pretinci[i].sifra, pretinci[i].volumen);
   }

   return 0;
}
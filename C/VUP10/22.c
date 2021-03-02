#include <stdio.h>

int main(void) {
   struct oglas_s {
      unsigned int sifra;
      unsigned int cijena;
      unsigned int povrsina;
   };

   int n, i, j;
   printf("Upisite broj oglasa > ");
   scanf("%d", &n);
   struct oglas_s oglasi[n];
   struct oglas_s pomocni;
   for (i = 0; i < n; i++) {
      printf("%d. oglas > ", i + 1);
      scanf("%u %u %u", &oglasi[i].sifra, &oglasi[i].cijena,
            &oglasi[i].povrsina);
   }

   int naj;
   for (i = 0; i < n - 1; i++) {
      naj = i + 1;
      for (j = i + 2; j < n; j++) {
         if (oglasi[j].cijena > oglasi[naj].cijena ||
             oglasi[j].cijena == oglasi[naj].cijena &&
                 oglasi[j].povrsina > oglasi[naj].povrsina ||
             oglasi[j].povrsina == oglasi[naj].povrsina &&
                 oglasi[j].sifra < oglasi[naj].sifra) {
            naj = j;
         }
      }
      if (oglasi[j].cijena > oglasi[naj].cijena ||
          oglasi[j].cijena == oglasi[naj].cijena &&
              oglasi[j].povrsina > oglasi[naj].povrsina ||
          oglasi[j].povrsina == oglasi[naj].povrsina &&
              oglasi[j].sifra < oglasi[naj].sifra) {
         pomocni = oglasi[i];
         oglasi[i] = oglasi[naj];
         oglasi[naj] = pomocni;
      }
   }

   for (i = 0; i < n; i++) {
      printf("%u EUR %u m2 %u\n", oglasi[i].cijena, oglasi[i].povrsina,
             oglasi[i].sifra);
   }
   return 0;
}
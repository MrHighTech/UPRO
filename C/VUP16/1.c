#include <stdio.h>
#define ZNAK 30

int main(void) {
   char niz[ZNAK + 1], *pokazivac = &niz;
   printf("Upisi niz znakova > ");
   fgets(niz, ZNAK + 1, stdin);

   int n, vs, ms, z, sz, zs, p;
   n = vs = ms = z = sz = zs = p = 0;

   while (*pokazivac != '\0' && *pokazivac != '\n') {
      if (*pokazivac >= 'A' && *pokazivac <= 'Z') {
         vs++;
      } else if (*pokazivac >= 'a' && *pokazivac <= 'z') {
         ms++;
      } else if (*pokazivac >= '0' && *pokazivac <= '9') {
         z++;
      } else if (*pokazivac >= '!' && *pokazivac <= '/' ||
                 *pokazivac >= ':' && *pokazivac <= '@') {
         sz++;
      }
      if (n != 0 && (*pokazivac >= '0' && *pokazivac <= '9') ||
          (*pokazivac >= '!' && *pokazivac <= '/') ||
          (*pokazivac >= ':' && *pokazivac <= '@')) {
         zs++;
      }
      n++;
      pokazivac++;
   }
   if (vs)
      p++;
   if (ms)
      p++;
   if (z)
      p++;
   if (sz)
      p++;
   if (zs)
      p++;

   int rez = 0;
   rez = n * 4 + (n - vs) * 2 + (n - ms) * 2 + z * 4 + sz * 6 + zs * 2 + p * 2;

   printf("Rezultat je: %d", rez);
   return 0;
}
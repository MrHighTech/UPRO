#include <math.h>
#include <stdbool.h>
#include <stdio.h>

void genPrim(int *rez, int granica, int n) {
   bool djeljiv;
   int nadjenoBrojeva = 0, kandidat = granica > 1 ? granica : 2, i;
   while (nadjenoBrojeva < n) {
      i = 2;
      djeljiv = 0;
      while (i <= sqrt(kandidat) && djeljiv == 0) {
         if (kandidat % i == 0) {
            djeljiv = 1;
         }
         i = i + 1;
      }
      if (djeljiv == 0 || kandidat == 1) {
         *(rez + nadjenoBrojeva) = kandidat;
         ++nadjenoBrojeva;
      }
      ++kandidat;
   }
   return;
}

int main(void) {
   int donjaGr, n;
   printf("Upisite donju granicu i broj prim brojeva > ");
   scanf("%d %d", &donjaGr, &n);

   int polje[n];
   genPrim(polje, donjaGr, n);
   for (int i = 0; i < n; i++) {
      printf("%7d\n", polje[i]);
   }
   return 0;
}
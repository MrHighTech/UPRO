int odrediIndNajVClana(int *frekvencije, int n) {
   int najveci = 0;
   for (int i = 0; i < n; i++) {
      if (*(frekvencije + i) > najveci) {
         najveci = *(frekvencije + i);
      }
   }
   return najveci;
}

int odrediFrek(int *matrica, int m, int n, int *frekvencije) {
   int najvrijednost = 0;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         ++*(frekvencije + *(matrica + i * n + j));
      }
   }
   najvrijednost = odrediIndNajVClana(frekvencije, 10);
   return najvrijednost;
}

#include <stdio.h>

int main(void) {
   int m, n;
   scanf("%d %d", &m, &n);
   int mat[m][n];
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &mat[i][j]);
      }
   }
   
   int novamat[10] = {0};
   int najfr = odrediFrek(mat[0], m, n, novamat);
   printf("m:%d n:%d\n", m, n);
   for (int i = 0; i < 10; i++) {
      printf("Broj:%d frekvencija: %d\n", i, novamat[i] );
   }
   printf("Najveca frekvencija: %d", najfr);
   return 0;
}
#include <stdio.h>
#define MAXDIM 1000
int main(void) {
   char polje[MAXDIM + 1];
   int i, duljina, indeks;
   char znak;
   printf("Upisi niz znakova > ");
   fgets(polje, MAXDIM + 1, stdin);
   /*izračunaj mu duljinu*/
   for (duljina = 0; *(polje + duljina); ++duljina)
      ;
   printf("\nDuljina:%d\n", duljina);
   do {
      printf("\nUpisi indeks i znak:");
      scanf("%d %c", &indeks, &znak);
      if (indeks < duljina && duljina < MAXDIM) {
         for (i = duljina; i >= indeks; i--)
            *(polje + i + 1) = *(polje + i);
         *(polje + indeks) = znak;
         duljina++;
         printf("Trenutni niz: %s", polje);
      }
   } while (indeks < duljina && duljina < MAXDIM);
   return 0;
}
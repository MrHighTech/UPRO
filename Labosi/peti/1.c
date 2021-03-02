#include <stdbool.h>
#include <stdio.h>

int minimum(int n1, int n2, int n3) {
   int min;
   if (n1 <= n2 && n1 <= n3) {
      min = n1;
   } else if (n2 <= n3 && n2 <= n1) {
      min = n2;
   } else
      min = n3;
   return min;
}

bool unutarGr(int n) {
   bool upit;
   if (n > 0 && n < 100) {
      upit = true;
   } else {
      upit = false;
   }
   return upit;
}

int main(void) {
   int n1, n2, n3;
   do {
      printf("Upisite tri prirodna broja > ");
      scanf("%d %d %d", &n1, &n2, &n3);
      if (unutarGr(n1) && unutarGr(n2) && unutarGr(n3)) {
         printf("Najmanji broj od %d %d %d je %d.\n", n1, n2, n3,
                minimum(n1, n2, n3));
      }
   } while (unutarGr(n1) && unutarGr(n2) && unutarGr(n3));

   return 0;
}
#include <stdio.h>

int main(void) {
   int m, n;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%2d ", n + i - j);
      }
      printf("\n");
   }
   return 0;
}
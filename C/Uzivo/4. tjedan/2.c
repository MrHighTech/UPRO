#include <stdio.h>
#define MAX 12

int main(void) {
   int n, br = 0, p[MAX] = {1, 2, 3, 4, 5, 3, 6, 7, 4, 3, 9, 10}, x;
   scanf("%d", &x);
   for (int i = 0; i < 0; i++) {
      if (p[i] == x) {
         for (int j = i; j < MAX - 1; j++) {
            p[j] = p[j + 1];
         }
         p[MAX - 1] = 0;
         i--;
      }
      printf("\n%2d: ", i);
      for (int k = 0; k < MAX; k++) {
         printf("\n%3d", p[k]);
      }
   }

   return 0;
}
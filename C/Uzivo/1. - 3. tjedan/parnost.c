#include <stdio.h>

int main(void) {
   int br, x = 0, max = 0, maxbr = 0;
   //   scanf("%d", &br);
   for (int i = 3; i <= 10000; i++) {
      br = i;
      x = 1;
      // printf("Za broj %d, koraci su:\n", br);
      while (br != 1) {
         if (br % 2 == 0) {
            br = br / 2;
         } else {
            br = br * 3 + 1;
         }
         // printf("%d. korak: %d\n", x, br);
         x++;
      }
      if (x > maxbr) {
         maxbr = i;
         max = x;
      }

      // printf("\n\n");
   }
   printf("Najveci broj koraka je %d za broj %d", max, maxbr);

   return 0;
}
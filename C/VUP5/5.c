#include <stdio.h>

int main(void) {
   for (int i = 10; i < 1000; i++) {
      if (i % 7 == 0 || (((i % 10) + (i / 10 % 10) == 5))) {
         printf("%d\n", i);
      }
   }
   return 0;
}
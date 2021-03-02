#include <stdio.h>

int main(void) {
   int god;
   scanf("%d", &god);
   if ((god % 400 == 0) || ((god % 4 == 0) && (god % 100 != 0))) {
      printf("Godina %d. je prijestupna.", god);
   } else {
      printf("Godina %d. nije prijestupna", god);
   }
}
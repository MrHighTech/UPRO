#include <stdio.h>

int main(void) {
   int l;
   printf("Upišite broj: ");
   scanf("%d", &l);
   printf(" %d, %d, %d", l / 10000, l / 100 % 10, l % 10);
}
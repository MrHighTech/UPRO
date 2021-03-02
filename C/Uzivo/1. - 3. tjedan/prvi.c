#include <stdio.h>

int main(void) {
   int br;
   scanf("%d", &br);
   printf("%d %d", br / 1000 % 10, br / 10 % 10);
}
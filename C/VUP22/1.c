#include <stdio.h>
int main(void) {
   int i;
   unsigned int k, m;
   unsigned short j;
   scanf("%d%ho", &i, &j);
   scanf(" %x %x ", &k, &m);
   printf("|%d|%hx|\n", i, j); // 11 12 u oktalnom
   printf("|%d|%d|\n", k, m);  // 13 1e u dekadskom
   printf("|%c|", getchar());  // X
   return 0;
}
#include <stdio.h>

int main(void) {
   int z1, z2, z3, z4;
   scanf("%d", &z1);
   scanf("%d", &z2);
   scanf("%d", &z3);
   scanf("%d", &z4);
   printf("z1= %d\n", z1);
   printf("z2= %d\n", z2);
   printf("z3= %d\n", z3);
   printf("z4= %d\n", z4);
   printf("m = %d", z1 * 1000 + z2 * 100 + z3 * 10 + z4);
}
#include <stdio.h>

int main(void) {
   unsigned int n;
   long long kvadrat;
   printf("Upisite prirodni broj u granicama [1, 4250000000] > ");
   scanf("%u", &n);
   kvadrat = 1ULL * n * n;
   printf("%u x %u = %llu", n, n, kvadrat);
   return 0;
}
#include <stdio.h>

int main(void) {
   FILE *ulTok = fopen("fibonacci.bin", "rb");
   int n;
   printf("Upisite n > ");
   scanf("%d", &n);
   int broj;
   for (int i = 0; i < n; i++) {
      fread(&broj, sizeof(int), 1, ulTok);
      printf("%d\n", broj);
   }

   fclose(ulTok);
   return 0;
}
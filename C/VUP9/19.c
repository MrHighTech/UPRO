#include <stdio.h>

int main(void) {
   char a = 'A', z = 'Z', velika, mala;
   for (velika = a; velika <= z - 5; velika++) {
      printf("%c. ", velika);
      for (mala = velika + 32; mala < velika + 32 + 6; mala++) {
         printf("%c ", mala);
      }
      printf(".%c\n", velika + 5);
   }
   return 0;
N}
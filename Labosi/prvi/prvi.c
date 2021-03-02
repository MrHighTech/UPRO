#include <stdio.h>

int main(void) {
   int br;
   printf("Upisite peteroznamenkasti cijeli broj > ");
   scanf("%d", &br);
   if (br < 0) {
      br *= -1;
   }
   if (br > 9999 && br < 100000) {
      printf("Druga i predzadnja znamenka > %d %d\n", br / 1000 % 10,
             br / 10 % 10);
   } else {
      printf("Nije unesen peteroznamenkasti cijeli broj.\n");
   }
   return 0;
}
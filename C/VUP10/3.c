#include <stdio.h>
#define MAX 8

int main(void) {
   char hex[MAX + 1];
   printf("Upisite niz > ");
   fgets(hex, MAX + 1, stdin);

   printf("Niz: %s\n", hex);
   int i;
   for (i = 0; i <= MAX; i++) {
      if (!((hex[i] >= '0' && hex[i] <= '9') ||
            (hex[i] >= 'A' && hex[i] <= 'Z'))) {
         break;
      }
   }

   int dekadski;
   if (hex[i] !=
       ((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'A' && hex[i] <= 'Z'))) {
      printf("Neispravan znak %c na poziciji %d", hex[i], i + 1);
   } else {
      for (i = 0; i <= MAX; i++) {
         if (hex[i] >= '0' && hex[i] <= '9') {
            dekadski = dekadski * 16 + hex[i] - '0';
         } else {
            dekadski = dekadski * 16 + hex[i] - 'A' + 10;
         }
      }
      printf("Dekadski: %u", dekadski);
   }

   return 0;
}
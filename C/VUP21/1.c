#include <stdio.h>
#include <string.h>

#define MAXZN 20

int myStrlen(const char *string) {
   int d = 0;
   while (*(string + d) != '\0') {
      d++;
   }
   return d;
}

int main(void) {
   char niz[] = "Ovo je niz";
   char *konst = "Ovo je konstantni niz";

   printf("%d\n", myStrlen(niz));
   printf("%d\n\n", strlen(niz));
   printf("%d\n", myStrlen(konst));
   printf("%d", strlen(konst));

   return 0;
}
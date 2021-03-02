#include <stdio.h>
#include <string.h>

#define MAXZN 20

void myStrcat(char *string, const char *s2) {
   for (; *string != '\0'; string++)
      ;
   while (*s2 != '\0') {
      *string = *s2;
      string++;
      s2++;
   }
   *string = '\0';
   return;
}

int main(void) {
   char niz[] = "Ovo je niz";
   char *konst = "Ovo je konstantni niz";

   char niz2[] = "Ovo je niz";
   myStrcat(niz2, konst);
   printf("%s\n", niz2);

   return 0;
}
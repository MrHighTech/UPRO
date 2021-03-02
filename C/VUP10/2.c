#include <stdio.h>
#define ZNAKOVI 20
int main(void) {
   char string[ZNAKOVI + 1];
   char ind;

   printf("Upisite niz > ");
   fgets(string, ZNAKOVI + 1, stdin);

   printf("Niz: ");
   printf("%s\n", string);


   ind = 65;
   for (int i = 0; i < ZNAKOVI; i++) {
      if (string[i] == '\n') {
         string[i] = '\0';
      }
      if (ind < string[i]) {
         ind = string[i];
      }
   }
   printf("Najveca ASCII vrijednost: %d", ind);
   return 0;
}
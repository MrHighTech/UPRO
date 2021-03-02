#include <stdio.h>
int main(void) {
   char niz1[20], niz2[20], niz3[20];
   scanf("%[^\n]", niz1); // Jedan Dva 
   scanf("%s", niz2); // 12Tri
   scanf("%[^123]", &niz3[0]); // Cetiri 45 
   printf("|%s|\n", niz1); 
   printf("|%s|\n", niz2);
   printf("|%s|\n", niz3);
   printf("|%c|", getchar()); // 1
   return 0;
}
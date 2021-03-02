#include <stdio.h>

int main(void) {
   int zad, lab, proj, z, l, p;
   scanf("%d %d %d", &zad, &lab, &proj);
   z = zad >= 10;
   l = lab >= 10;
   p = proj >= 10;

   if (z + l + p == 3) {
      printf("Mozete pristupiti ispitu.");
   } else {
      if (z == 0) {
         printf("Morate ponoviti zadace.\n");
      }
      if (l == 0) {
         printf("Morate ponoviti labose.\n");
      }
      if (p == 0) {
         printf("Morate ponoviti projekt.\n");
      }
   }
}
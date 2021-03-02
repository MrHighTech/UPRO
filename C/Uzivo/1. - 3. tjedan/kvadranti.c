#include <stdio.h>

int main(void) {
   int x1, y1, x2, y2, x, y;
   printf("Upisite koordinate gornjeg lijevog kuta\n");
   printf("x1: ");
   scanf("%d", &x1);
   printf("y1: ");
   scanf("%d", &y1);

   printf("Upisite koordinate donjeg desnog kuta\n");
   printf("x2: ");
   scanf("%d", &x2);
   printf("y2: ");
   scanf("%d", &y2);

   printf("Upisite koordinate tocke koju zelite ispitati\n");
   printf("x: ");
   scanf("%d", &x);
   printf("y: ");
   scanf("%d", &y);

   if ((x1 <= x && x2 >= x) && (y1 >= y && y2 <= y)) {
      if (((x1 <= x) && (x1 + x2) / 2 > x) &&
          ((y1 >= y) && (y1 + y2) / 2 < y)) { // kvadrant A
         printf("Tocka se nalazi unutar pravokutnika: A");
      } else if (((x2 >= x) && (x1 + x2) / 2 < x) &&
                 ((y1 >= y) && (y1 + y2) / 2 < y)) { // kvadrant B
         printf("Tocka se nalazi unutar pravokutnika: B");
      } else if (((x1 <= x) && (x1 + x2) / 2 > x) &&
                 ((y2 <= y) && (y1 + y2) / 2 > y)) { // kvadrant C
         printf("Tocka se nalazi unutar pravokutnika: C");
      } else if (((x2 >= x) && (x1 + x2) / 2 < x) &&
                 ((y2 <= y) && (y1 + y2) / 2 > y)) { // kvadrant D
         printf("Tocka se nalazi unutar pravokutnika: D");
      } else {
         if (x < (x1 + x2) / 2 && y == (y1 + y2) / 2) { // granica AC
            printf("Tocka se nalazi na granici vise pravokutnika: AC");
         } else if (x > (x1 + x2) / 2 && y == (y1 + y2) / 2) { // granica BD
            printf("Tocka se nalazi na granici vise pravokutnika: BD");
         } else if (y < (y1 + y2) / 2 && x == (x1 + x2) / 2) { // granica CD
            printf("Tocka se nalazi na granici vise pravokutnika: CD");
         } else if (y > (y1 + y2) / 2 && x == (x1 + x2) / 2) { // granica AB
            printf("Tocka se nalazi na granici vise pravokutnika: AB");
         } else { // sredina
            printf("Tocka se nalazi na granici vise pravokutnika: ABCD");
         }
      }
   } else
      printf("Tocka se ne nalazi unutar pravokutnika.");
}
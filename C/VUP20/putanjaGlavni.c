#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "putanja.h"
#define RED 10


int main(void) {
   char polje[RED][RED];
   srand((unsigned)time(NULL));

   inicijalizirajPolje(polje[0], RED);

   crtajPolje(polje[0], RED, 'o');
   ispisiPolje(polje[0], RED);
   
   printf("\n");

   crtajPolje(polje[0], RED, 'x');
   ispisiPolje(polje[0], RED);

   return 0;
}
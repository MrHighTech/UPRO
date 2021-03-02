#include "loto.h"
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define KUGLICA_U_BUBNJU 39
#define MAX_KUGLICA 7

static int izvucenoBrojeva = 0;

int dajSljedecuKuglicu(void) {
   static int izvuceneKuglice[MAX_KUGLICA];

   static bool prvoIzvlacenje = true;
   if (prvoIzvlacenje) {
      srand((unsigned)time(NULL));
      prvoIzvlacenje = false;
   }

   int izvuceniBroj;
   if (izvucenoBrojeva < MAX_KUGLICA) {
      bool duplikat;
      do {
         izvuceniBroj = rand() % KUGLICA_U_BUBNJU + 1;
         duplikat = 0;
         for (int i = 0; i < MAX_KUGLICA; i++) {
            if (izvuceneKuglice[i] == izvuceniBroj) {
               duplikat = 1;
            }
         }
      } while (duplikat);

      izvuceneKuglice[izvucenoBrojeva++] = izvuceniBroj;

   } else {
      izvuceniBroj = -1;
   }

   return izvuceniBroj;
}

void resetirajBubanj(void) {
   izvucenoBrojeva = 0;
   return;
}
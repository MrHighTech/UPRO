int BrojDjelitelja(int broj) {
      int brojac = 0;
      for (int i = 2; i < broj; i++) {
         if (broj % i == 0) {
            brojac++;
         }
      }
      return brojac;
}

void NajmanjiBrojDjelitelja(int m, int n, int *p1, int *p2) {
   int najmani = m;
   for (int i = m; i <= n; i++) {
      if (BrojDjelitelja(i) < BrojDjelitelja(najmani)) {
         najmani = i;
      }
   }
   *p1 = najmani;
   *p2 = BrojDjelitelja(najmani);
   return;
}

int main(void) {
   
   return 0;
}


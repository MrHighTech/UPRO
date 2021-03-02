// bin. koeficijent C(m, n) multiplikativnom formulom
int binKoef(int m, int n) {
   int rez = 1;
   int i;
   if (n < m - n)
      for (i = 1; i <= n; ++i)
         rez = rez * (m - n + i) / i;
   else
      for (i = 1; i <= m - n; ++i)
         rez = rez * (n + i) / i;
   return rez;
}

// x na potenciju n, n  0
double eksp(float x, int n) {
   int i;
   double rez = 1.;
   for (i = 0; i < n; ++i)
      rez *= x;
   return rez;
}

// apsolutna vrijednost od x
float fabsolut(float x) { return x >= 0 ? x : -x; }

// apsolutna vrijednost od x
double dabsolut(double x) { return x >= 0 ? x : -x; }

// apsolutna vrijednost od n
int iabsolut(int n) { return n >= 0 ? n : -n; }

// n!
unsigned long long fakt(unsigned int n) {
   unsigned int i;
   unsigned long long umnozak = 1ULL;
   for (i = 2U; i <= n; ++i)
      umnozak = umnozak * i;
   return umnozak;
}

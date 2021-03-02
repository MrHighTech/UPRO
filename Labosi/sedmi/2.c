void SlucajniNizVelikihIMalihSlova(int n, char *polje) {
   int i;
   while (i < n) {
      *(polje++) = rand() % ('Z' - 'A' + 1) + 'A';
      i++;
   }
   while (i < n) {
      *(polje++) = rand() % ('z' - 'a' + 1) + 'a';
      i++;
   }

   *polje++ = '\0';
   return;
}
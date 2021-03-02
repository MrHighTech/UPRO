#include <stdio.h>

int main(void) {
   int l;
   printf("Upišite stanje računa u lipama: ");
   scanf("%d", &l);
   printf("Kune: %d Lipe: %d", l / 100, l % 100);
}
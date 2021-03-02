#include <stdio.h>
static int x = 25;
void fun1(void) {
   static int x = 5;
   printf("%d\n", ++x);
}
void fun2(void) {
   int x = 10;
   printf("%d\n", ++x);
}
void fun3(void) { printf("%d\n", ++x); }
int main(void) {
   x++;
   {
      static int x = 15;
      {
         int x = 20;
         printf("%d\n", x++);// 20
      }
      printf("%d\n", x++); // 15
   }
   printf("%d\n", x++); // 26
   fun1(); // 6
   fun2(); // 11
   fun3(); // 28
   fun1(); // 7
   fun2(); // 11
   fun3(); // 29
   return 0;
}
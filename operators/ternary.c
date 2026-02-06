/*#include <stdio.h>

int main(){

   int a = 100, b = 20, c;

   c = (a >= b) ? a : b;

   printf ("a: %d b: %d c: %d\n", a, b, c);

   return 0;
}*/

#include <stdio.h>

int main(){

   int a = 100, b = 20, c;

   c = (a >= b) 
    ? (printf("a is larger "), a) 
    : (printf("b is larger "), b);

   
   printf ("a: %d b: %d c: %d\n", a, b, c);

   return 0;
}

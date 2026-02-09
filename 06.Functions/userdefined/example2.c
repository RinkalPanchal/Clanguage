#include <stdio.h>

float divide (int, int);

int main(){

   int x = 15, y = 2;

   float z = divide (x, y);
   
   printf("%f", z);

   return 0;
}

float divide (int a, int b){

   int c = a/b;

   return c;
}
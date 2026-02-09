#include <stdio.h>

/* global variable declaration */
int g = 10;

int function1();
int function2();

int main(){

   printf("Value of Global variable g = %d\n", g);
   
   function1();
   printf("Updated value of Global variable g = %d\n", g);
   
   function2();
   printf("Updated value of Global variable g = %d\n", g);
   
   return 0;
}

int function1(){
   g = g + 10;
   printf("New value of g in function1(): %d\n", g);
   return 0;
}

int function2(){  
   printf("The value of g in function2(): %d\n", g);
   g = g + 10;
   return 0;
}

#include <stdio.h>

/* global variable declaration */
int x = 10;

int function1();

int main(){

   printf("value of Global variable x= %d y=%d\n", x, y);
   function1();
   return 0;
}

int y = 20;

int function1(){
   printf ("Value of Global variable x = %d y = %d\n", x, y);
}


#include <stdio.h>

// Global variable x
int x = 50;

int main(){

   // Local variable x
   int x = 10;{
      extern int x;
      printf("Value of global x is %d\n", x);
   }

   printf("Value of local x is %d\n", x);

   return 0;
}
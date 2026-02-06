/*#include<stdio.h>
int main(){

    auto int a = 18;
    static int b = 8;
    
    printf("Value of auto variable:%d\n",a);
    printf("Value of static variable:%d\n",b);
    if(a!=0){
        printf("Sum of static and auto variable:%d\n",(a+b));

    }
    return 0;
}*/


// passing the static variable to function

#include <stdio.h>

int myfunction();

int x = 5;
int main(){
   myfunction();
   printf("in main - x:%d\n", x);

   return 0;
}

int myfunction(){
   x++;
   printf("Incremented value of x: %d\n", x);
}
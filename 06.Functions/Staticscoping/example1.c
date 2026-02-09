// Static Scoping example

#include<stdio.h>

int fun1(int );
int fun2(int );

int a = 5;         //global variable

int main(){

    int a =10;        // local variable
    a = fun1(a);
    printf("%d\n",a);
}

int fun1(int b){
    b = b+10;
    b = fun2(b);
    return b;
}

int fun2(int b){
      int  c = a +b;
      return c;
}
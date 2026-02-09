#include<stdio.h>
 
 int add(int a,int b);
 int a = 10;

 int main()
 {
    int a = 2; int b = 30;
    int c = 0;

    printf("value of a in main():%d\n",a);
    c = add(a,b);
    printf("Total result:%d\n",c);

    return 0;
 }

 int add(int a , int b){

    printf("value of a in add():%d\n",a) ;
    printf("value of b in add():%d\n",b);

    return a + b;
 }
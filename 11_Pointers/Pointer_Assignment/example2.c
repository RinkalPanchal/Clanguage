//Pointer Assignment

#include<stdio.h>

int main(){
    int i =10,j = 20;
    int *p,*q;   //Pointer Declaration
    p = &i;       // Pointer initialization
    q = &j;
    *q = *p;
    printf("%d %d",*p,*q);
    return 0;
}
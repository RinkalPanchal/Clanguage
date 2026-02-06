// Adding the values and store that particular with address using pointer

#include<stdio.h>

int add(int *x,int *y);

int main()
{
    int a=90; int b=70;
    int c=add(&a,&b);
    printf("Answer is :%d\n", c);
}

int add(int *x, int *y){
     
     int z = *x + *y;
     return z;
}
//Normal addition using call by value

#include<stdio.h>
int add(int x,int y)
{
    int z = x + y; 
    return z;
}

int main()
{
    int a =30, b=40;
    int c = add(a,b);
    printf("Sum is :%d\n",c);
}
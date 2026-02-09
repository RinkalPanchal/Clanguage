// Sum Of two numbers

#include<stdio.h>
int add(int ,int );

int main()
{
    int m=20,n=30,sum;
    sum = add(m,n);
    printf("Sum is:%d\n",sum);
}

int add(int a,int b)
{
    int c;
    c = a + b;
    return c;
}
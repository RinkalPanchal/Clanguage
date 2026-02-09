#include<stdio.h>

int add(int a , int b){

    
    int result;
    result = a + b;  //local variable
    return result;
}

int main()
{
    int sum;
    sum = add(3,4);
    printf("Sum=%d\n",sum);
    return 0;
}
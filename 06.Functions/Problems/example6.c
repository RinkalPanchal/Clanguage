// calculate the factorial of a number using recursion

#include<stdio.h>

int fact(int n){

    if(n == 1)
            return n;

    else
        return n * fact(n-1);
}

int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("factorial of a number is :%d",fact(n));
    return 0;
}
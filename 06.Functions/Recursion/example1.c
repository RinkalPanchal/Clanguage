// Using recursion find the factorial of N number

#include <stdio.h>

int fact(int n){
     if(n==1)
        return 1;
     else
        return n*fact(n-1);   
}

int main(){

    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int c = fact(n);
    printf("Factorial of a number is given by:%d\n",c);
    return 0;
}
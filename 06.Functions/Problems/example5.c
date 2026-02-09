// sum of first N natural numbers using recursion

#include <stdio.h>

int rec(int n){
    if(n <= 1)
        return n;

    else
        return n + rec(n - 1);    
}

int main(){

    int n;
    printf("Enter a numner:");
    scanf("%d",&n);
    printf("Sum of Natural numbers is %d\n",rec(n));

    return 0;
}
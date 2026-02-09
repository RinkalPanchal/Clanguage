// Tail recursion

//print numbers n to 1

#include<stdio.h>

int tail(int n){

    if(n == 0)
        return n;
    printf("%d\n",n)    ;
    tail(n-1);           //recursive call is the last statement
}

int main(){

    tail(5);
    return 0;
}
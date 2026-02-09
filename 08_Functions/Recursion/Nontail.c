//Non Tail Recursion 

// Factorial 

#include<stdio.h>

int fact(int n){
    if(n == 0)
        return 1;
    else
        return n * fact(n - 1);  //non tail recursion 
}

int main(){

    printf("%d\n",Fact(5));
    return 0;
}
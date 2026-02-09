//Direct Recursion

#include <stdio.h>

int direct(int n){
    if(n == 0)
    return n;

    printf("%d\n",n);
    direct(n-1);     //direct recuesive call
}

int main(){

    direct(5);
    return 0;
}
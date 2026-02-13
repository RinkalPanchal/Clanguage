// Dangling Pointer

#include<stdio.h>

int *fun(){

    int n = 10;       // Local variable
    return &n;          // It returns the address of the local variable which get destroyed after execution
}

int main(){
    int *p = NULL;
    p = fun();            // now it becomes the dangling pointer
    printf("%d",*p);
    return 0;
}
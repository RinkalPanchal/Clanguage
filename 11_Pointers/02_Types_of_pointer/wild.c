// Wild Pointers 

#include<stdio.h>

int main(){

    int *p; 
    *p = 10;              //uninitialized pointer
    printf("%d", *p);
    return 0;
}
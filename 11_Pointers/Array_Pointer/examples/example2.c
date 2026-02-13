// Pointer pointing to an entire 1D array

#include<stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};
    int (*p)[5] = &a;
    printf("%d\n", **p);
    return 0;
}
// printing the size of different types of pointers

#include<stdio.h>

int main(){

    //Initialize a variables
    int x = 10;
    float y = 15.3;
    char z = 'c';

    //Declaration and initialization of Pointer
    int *p = &x;
    float *q = &y;
    char *r = &z;

    printf("Size  of x =%lu\n",sizeof(p));
    printf("Size of y =%lu\n",sizeof(q));
    printf("Size of z =%lu\n",sizeof(r));

    return 0;
}
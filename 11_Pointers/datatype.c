// getting values of different types of variables by using pointers

#include<stdio.h>

int main(){

    int x = 10;
    float y = 15.3;
    char z = 'c';

    int *p = &x;
    float *q = &y;
    char *r = &z;

    printf("Value of x =%d\n",*p);
    printf("Value of y =%f\n",*q);
    printf("Value of z =%c\n",*r);

    return 0;
}
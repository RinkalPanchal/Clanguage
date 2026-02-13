//Post increment by using pointer

#include<stdio.h>

int main(){

    int a[] = {1,2,3,4,5};
    int *p = &a[0];
    printf("%d",*(p++));
    printf("%4d\n",*p);

    return 0;
}
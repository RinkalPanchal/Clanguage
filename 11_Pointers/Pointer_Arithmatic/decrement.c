//Pre and Post decrement using pointer

#include<stdio.h>

int main(){

    int a[] = {1,2,3,4,5};
    int *p = &a[2];
    printf("%d",*(--p));   // pre decrement
    printf("%4d\n", *(p--));     // post decrement
    return 0;
}
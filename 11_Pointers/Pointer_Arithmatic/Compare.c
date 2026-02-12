//With relational and equality operator to compare pointers

#include<stdio.h>

int main(){

    int a[] = {12,23,56,7,8,90,11};
    int *p = &a[2];
    int *q = &a[5];

    printf("%d\n",*(p+3));
    printf("%d\n" , *(q-2));
    printf("%ld\n", q - p);
    printf("%d\n", p < q);
    printf("%d\n" , *p < *q);

    return 0;
}
// Reversing a series of numbers using pointers

#include<stdio.h>

int main(){

    int a[5];
    int *p;

    printf("Enter a 5 elements of an array:\n");
    for(p = a; p <= a+4; p++){
        scanf("%d", p);
    }

    printf("Elements in an array:\n");
    for(p = a; p <= a+4; p++){
        printf("%4d",*p);
    }

    printf("\n");

    printf("Reverse array:\n");
    for(p = a+4; p >= a; p--){
        printf("%4d",*p);
    }

    printf("\n");

    return 0;
}
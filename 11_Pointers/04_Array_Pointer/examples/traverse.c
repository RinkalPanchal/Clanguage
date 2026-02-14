//Traverse an 1d array with pointer

#include<stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};
    int *p;
    p = a;

    printf("Print the array elements:\n");
    for(int i = 0; i < 5 ; i++){
        printf("a[%d] = %d\n", i, *(p + i));
    }
    return 0;
}
// pointer to pointer or double pointer

#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("Value of an integer: %d",a);
    printf("%4d" , *p);
    printf("%4d\n" , **q);

    return 0;

}
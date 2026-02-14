// Print the address of double pointer

#include<stdio.h>

int main(){

    int a = 10;
    int *p;
    int **q;

    p = &a;
    q = &p;

    printf("Address of variable a :%p\n" ,&a);
    printf("address of pointer p : %p\n" ,p);
    printf("Address of double pointer q : %p\n" , *q);
    printf("Value of q : %d\n" , **q);

    return 0;
}
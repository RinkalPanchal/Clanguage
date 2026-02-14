// passing pointers to functions

// swaping the two variables using pointers

#include<stdio.h>

int swap(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int main(){
    int a = 10, b =20;
    
    printf(" Value of 'a' before swapping %d\n" , a );
    printf("Value of 'b' before swapping %d\n" , b);

    swap(&a,&b);

    printf(" Value of 'a' before swapping %d\n" , a );
    printf("Value of 'b' before swapping %d\n" , b);

    return 0;

}
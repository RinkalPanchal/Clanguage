//Passing pointers to function

#include<stdio.h>

int add(int *x , int *y){
    int z;
    z = *x + *y;
    return z;
}

int main(){
    int a = 10, b = 20 ;
    int c = add(&a,&b);    // passing address of two variables to function
    printf("Addition : %d\n" , c);
    return 0;
}
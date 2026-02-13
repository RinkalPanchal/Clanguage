// Pointer to constant

#include<stdio.h>

int main(){

    int x = 10;
    int y = 20;

    int const *p = &x;
    printf("%d",*p);

    p = &y;              // can modify pointer address
    printf("%4d\n",*p);

   // *p = 15  we cannot modify the pointer value      

    return 0;
}
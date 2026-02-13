// Constant Pointer to constant

#include<stdio.h>

int main(){

    int x = 10;
    int y = 20;

    int const *const p =&x;

    printf("%d\n", *p);

    //*p = 15       cannot modify the value
    //p = &y    cannot modify the address
    return 0;
}
#include <stdio.h>

int var = 10;   // global variable

void fun(void)
{
    printf("%d\n", var);   // uses global var
}

int main(void)
{
    int var = 4;           // local variable (shadows global)
    printf("%d\n", var);   // prints 4
    fun();                 // prints 10
    return 0;
}

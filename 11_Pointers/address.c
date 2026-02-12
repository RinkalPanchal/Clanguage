// Print Value and Address of an Integer

#include<stdio.h>

int main(){

    int var = 20;
    int *p;

    p = &var;

    printf("Address of the variable : %p\n", &var);
    printf("Address stored in p variable : %p\n",p);
    printf("Value of p variable: %d\n", *p);

    return 0;
}
// Access and MAnipulate the variable using pointer

#include<stdio.h>

int main(){
    int x = 10;

    int *p = &x;

    printf("Current value is :%d\n",*p);

    *p = 20;

    printf("Updated value is :%d\n",*p);

    return 0;
}
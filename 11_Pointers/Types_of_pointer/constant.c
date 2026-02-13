// Constant pointer

#include<stdio.h>

int main(){

    int x =10;
    int y = 20;

    int *const p = &x;    //constant pointer to integer

    printf("%d",*p);    

    *p = 15;   //to change value at constant address is possible

    printf("%4d\n",*p);

    //p = &y;   //but change the address of the pointer returns an error

    return 0;
}
//Value of operator or dereference operator

#include<stdio.h>

int main(){

    int i = 2;      //initialize a variable
    int *p;         ///Declaring a pointer
    p = &i;        // initialize a pointer
    
    printf("%d\n",*p);    //Print the value which is stored at location which points by the pointer p

    return 0;
}
// Void Pointer

#include<stdio.h>

int main(){

    void *arr[3];   // this pointer has no associated datatype

    int a = 5;
    float b = 22.58;
    char c = 'R';

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    printf("Integer :%d\n",*((int *)arr[0]));        // Access variable data through typecasting
    printf("Float : %f\n" ,*((float *)arr[1]));
    printf("Character : %c\n" ,*((char *)arr[2]));

    return 0;
}
// printing a string using format specifier

#include<stdio.h>

int main(){

    char a[] = "Hello world";
    int n = sizeof(a)/sizeof(a[0]);
    printf("%s\n" , a);
    return 0;
}
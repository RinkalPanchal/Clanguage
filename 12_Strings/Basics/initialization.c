// printing characters of string

#include<stdio.h>

int main(){

    char a[] = "Hello world";
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0 ; i < n ; i++ )
        printf("%c\n" , a[i]);

        return 0;
}
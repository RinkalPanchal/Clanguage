// String input using scanf without format specifier

#include<stdio.h>

int main(){
    char a[6];
    int i;

    for( i = 0 ; i < 5 ; i++){
        scanf("%c" , &a[i]);
    }

    a[i] = '\0';

    printf("%s\n" , a);

    return 0;
}


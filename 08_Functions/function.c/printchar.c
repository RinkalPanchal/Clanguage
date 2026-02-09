//Print A character by calling a function

#include<stdio.h>
char fun();

int main(){
    char c = fun();
    printf("Character is %c:\n", c);
}

char fun()
{
    char a='A';
    return a;
}
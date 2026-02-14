// String input with format specifier

#include<stdio.h>

int main(){

    char a[5];
     
     printf("Enter a string:\n");
     scanf("%s",a);

     printf("You entered;\n");
     printf("%s\n", a);

     return 0;
}
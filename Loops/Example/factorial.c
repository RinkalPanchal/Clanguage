#include <stdio.h>

int main(){
    long fact = 1;
    int num;

    printf("Enter a number ");
    scanf("%d",&num);

    while(num > 0){
        fact = fact * num;
        num--;
    }

    printf(" factorial =%ld", fact);

    return 0;
}
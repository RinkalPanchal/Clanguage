
#include<stdio.h>

int main(){
    int base,exponent;
    int result = 1;
    int i = 1;

    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exponent:");
    scanf("%d",&exponent);

    for(; i<=exponent ; i++){
        result = result * base;
    }

    printf("%d^%d = %d\n", base , exponent , result);

    return 0;
}
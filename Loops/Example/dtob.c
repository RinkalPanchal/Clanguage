// find decimal to binary

#include<stdio.h>

int main(){

    int n,rem;
    int binary=0;
    int place=1;

    printf("Enter the number:");
    scanf("%d",&n);

    while(n>0){
        rem = n%2;
        binary += rem * place;
        place *= 10;
        n = n/2;
    }

    printf("Binary number is %d\n:",binary);

    return 0;


}
#include<stdio.h>


int main()
{
    int n,original,digit,reversed=0;
    int sum = 0; 

    printf("enter a number:");
    scanf("%d",&n);

    original = n;

    while(n!=0){
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n/10;
    }

    if(reversed == original)
        printf("%d is an armstrong number", original);
    else
        printf("%d is not an armstrong number",original);
       
    return 0;
}
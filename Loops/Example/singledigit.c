// Calculate sum of digits until single digit 

#include <stdio.h>

int main(){

    int num, sum;

    printf("Enter the Number:");
    scanf("%d", &num);

    while(num>=10){
        sum = 0;

        while(num>0){
            sum = sum+(num % 10);
            num = num /10;
        }
        num = sum ;//update number with sum
    };

    printf("Sum is :%d\n",sum);

    return 0;
}
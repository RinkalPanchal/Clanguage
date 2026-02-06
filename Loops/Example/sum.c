#include <stdio.h>
int main()
{
    int n,i = 0,sum = 0;

    printf("enter the value: ");
    scanf("%d",&n);

    do{
        sum = sum + i;
        i++;
    }while(i <= n);

    printf("Sum of first %d N number:%d\n",n,sum);

    return 0;
}
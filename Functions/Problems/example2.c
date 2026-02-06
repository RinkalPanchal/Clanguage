//Number classification Numbers using menu driven

#include<stdio.h>

int isEven(int n);
int isodd(int n);
int isPositive(int n);
int isNegative(int n);
int isPrime(int n);

int main(){

    int choice,n;

    do{

        printf("1.Even\n");
        printf("2.Odd\n");
        printf("3.Positive\n");
        printf("4.Negative\n");
        printf("5.Prime\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter a number:");
            scanf("%d",&n);
            printf("A number is :%d\n",isEven(n));
            break;

            case 2:
            printf("Enter a number:");
            scanf("%d",&n);
            printf("A number is :%d\n",isodd(n));
            break;

            case 3:
            printf("Enter a number:");
            scanf("%d",&n);
            printf("A number is :%d\n",isPositive(n));
            break;

            case 4:
            printf("Enter a number:");
            scanf("%d",&n);
            printf("A number is :%d\n",isNegative(n));
            break;

            case 5:
            printf("Enter a number:");
            scanf("%d",&n);
            printf("A number is :%d\n",isPrime(n));
            break;

            default:
                 printf("Invalid choice:");
        }

    }while(choice != 0);

    return 0;
}


int isEven(int n){
    return (n % 2==0);
}

int isodd(int n){
    return (n % 2!=0);
}

int isPositive(int n){
    return (n > 0);
}

int isNegative(int n){
    return (n < 0);
}


int isPrime(int n){
    int i;

    if(n<=1)
        return 0;

    for(i=2;i<=n/2;i++)    
        {
            if(n % i==0)
                return 0;
        }

    return 1;    

}

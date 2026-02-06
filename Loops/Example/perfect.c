#include<stdio.h>

int main(){

    int i=1,n;
    int sum=0;

    printf("enter a number:");
    scanf("%d",&n);

    /*for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }*/

    /*while(i<=n/2){
        if(n % i==0){
            sum = sum+i;
        }i++;
   }*/

    do{
        if(n%i==0){
            sum=sum+i;
        }i++;
    }while(i<=n/2);

    if(sum==n && n>0)
        printf("%d is a paerfect number:",sum);
    else    
        printf("%d is not a perfect number:",sum);

    return 0;    
}
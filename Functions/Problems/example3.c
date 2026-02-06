//Test these functions for numbers 1-20.

#include<stdio.h>

int isSquare(int n);
int isCube(int n);
int isPower(int n,int p);
long isFactorial(int n);
int isSumofSeries(int n);

int main(){ 
    int i;
    for(i = 1; i <= 20;i++){
         printf("%d|%d|%d|%ld|%d:\n",i,isSquare(i),isCube(i),isFactorial(i),isSumofSeries(i));
    }

    for(i = 1; i <= 20;i++){
        printf("%d^2 = %d\n",i,isPower(i,2));
    }
    return 0;
}

int isSquare(int n){
    return n*n;
}

int isCube(int n){
    return n*n*n;
}

int isPower(int n, int p){
    int i;
    int result = 1;

    for(i = 1; i <= p; i++)
        result = result * n;
    return result;    
}

long isFactorial(int n){
    long fact = 1;
    int i;

    for(i = 1; i <=n ; i++){
        fact =fact *n;
    }
    return fact;
}

int isSumofSeries(int n){
    return (n * (n +1)) / 2;
}

 
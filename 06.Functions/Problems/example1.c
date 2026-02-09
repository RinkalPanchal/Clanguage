//Simple calculator functions

#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int modulo(int a, int b);

int main(){

    int a,b;

    printf("Enter a number :");
    scanf("%d",&a);

    printf("Enter a number :");
    scanf("%d",&b);

    printf("The Addition is:%d\n",add(a,b));
    printf("The subtraction is:%d\n",sub(a,b));
    printf("The multiplication is:%d\n",mul(a,b));
    printf("The division is:%d\n",div(a,b));
    printf("The modulo is:%d\n",modulo(a,b));

    return 0;
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int modulo(int a, int b){
    return a%b;
}
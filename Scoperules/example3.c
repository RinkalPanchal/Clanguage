#include <stdio.h>
int count = 0;             //global variable

int add(int a, int b){
    
    int result;
    result = a + b;            //local variable

    count++;
    printf("A value of count=%d\n",count);
    return result;
}

int main(){

    int sum1,sum2;

    sum1= add(7,8);
    printf("Sum1=%d\n",sum1);

    sum2= add(6,7);
    printf("sum2=%d\n",sum2);

    return 0;
}
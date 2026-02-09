//Pass array with call by value method

#include<stdio.h>

float average(int a[5]);   //declaration of a function

int main(){

    int a[5] = {10,5,15,20,7};
    float avg = average(a);    //Function call
    printf("Average of the array is :%f",avg);

    return 0;
}


float average(int a[5]){         //Definition of a function

    int sum = 0;
    int i;
    for(i = 0; i <5;i++){
        printf("a[%d]=%d\n",i,a[i]);
        sum = sum +a[i];
    }

    return (float)sum/5;
}
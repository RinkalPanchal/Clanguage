//Calculate Sum of array elements

#include<stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};  //Declaring and initializing an array

    int sum =0;   //initializing the variable

    for( int i = 0; i < 5; i++){
        sum = sum + a[i];
    }

    printf("sum of the array elements is:%d\n",sum);

    return 0;
}
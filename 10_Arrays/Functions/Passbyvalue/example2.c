////Pass array with call by value method but length is undefined 

#include<stdio.h>

float average( int a[], int length);      //Function Declaration

int main(){

    int a[] = {10,2,5,15,12};
    int length = sizeof(a)/sizeof(int);
    float avg = average(a,length);         //Function call
    printf("Average is: %f\n",avg);

    return 0;

}

float average(int a[], int length){            //Function Definition

    int sum = 0;
    int i;

    for(i = 0; i < length; i++){
        printf("a[%d] : %d\n",i,a[i]);
        sum = sum + a[i];
    }

    return (float)sum/length;
}


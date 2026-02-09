//Average of the one dimensional array elements 

#include<stdio.h>

int main()
{
    int marks[10]={20,50,40,30,70,80,90,10,60,80}; //Initialization and declaration 
    int i; int sum=0;          // initialization 
    float avg;

    for( i = 0; i<=9; i++){           // Summation of the array elements
        sum +=marks[i];
    }

    avg = (float)sum/10;               // Average of the array elements
    printf("Average :%f\n", avg);
    return 0;

}
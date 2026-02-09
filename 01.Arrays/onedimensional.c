#include<stdio.h>

int main()
{
    int marks[10]={20,50,40,30,70,80,90,10,60,80};
    int i; int sum=0;
    float avg;

    for( i = 0; i<=9; i++){
        sum +=marks[i];
    }

    avg = (float)sum/10;
    printf("Average :%f\n", avg);
    return 0;

}
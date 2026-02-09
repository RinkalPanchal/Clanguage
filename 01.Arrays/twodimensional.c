// Addition of Row and Columns in two dimensional array
#include<stdio.h>

int main(){

    int arr[5][5]={
        {2,4,5,7,8},
        {5,8,9,10,12},
        {7,45,77,12,33},
        {23,43,66,18,21},
        {67,3,7,8,9}
    };
    int i,j;
    int sum=0;

    //Row sum
    printf("Row total:");

    for(i = 0; i <5; i++){
        for(j = 0; j<5 ; j++){
            sum += arr[i][j];
        }
        printf("%d",sum);
        sum=0;
    }

    //Column sum
    printf("\nColumn total:");

    for(j = 0; j <5; j++){
        for(i = 0; i<5 ; i++){
            sum += arr[i][j];
        }
        printf("%d",sum);
        sum=0;
    }
    printf("\n");
    return 0;
}
// Find the transpose of a matrix

#include<stdio.h>

int main(){

   int temp,i,j;
  

    int a[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //Trancpose of a matrix
    for(i = 0; i < 3 ; i++){
        for( j = i + 1 ; j < 3;j++){   //j = i +1 to avoid swapping of the same numbers 
            temp = a[i][j];
            a[i][j] = a[j][i];       
            a[j][i] = temp;
        }
    }


    //Display of a matrix
    printf("Transpose of a matrix:\n");
    for(i =0 ; i < 3 ;i++){
        for(j = 0; j < 3; j++){
            printf("%4d ",a[i][j]);
        }

        printf("\n");
    }

    

    return 0;
}
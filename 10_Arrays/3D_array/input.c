// Take elements input from the user

#include<stdio.h>

int main(){

    int i,j,k;
    int a[2][3][3];

    //Input elements from user 
    printf("Enter the elements:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3 ; k++)
            scanf("%d", &a[i][j][k]);
        }

        printf("\n");
    }


    //Print the array elements
    printf("Matrix of elements are :\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++)
            printf("a[%d][%d][%d] = %d\n", i,j,k,a[i][j][k]);
        }

        printf("\n");
    }

    return 0;
}


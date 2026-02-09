// printing two dimensional array as matrix in rows and column

#include<stdio.h>

int main()
{
    int a[3][5]={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}};        //Define rows and columns elements
    int i,j;

    for(i = 0; i < 3; i++){
        for(j = 0; j<5; j++){
            printf("%4d", a[i][j]);      //printing the array elements as a matrix
        }
        printf("\n");
    }
    return 0;
}

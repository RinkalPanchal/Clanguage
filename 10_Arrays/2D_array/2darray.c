// Printing elements of two dimensional array


#include<stdio.h>

int main()
{
    int a[5][2]={{0,1},{2,3},{5,6},{2,7},{9,0}};    //initialize the rows and columns in 2d array
    int i,j;


    //print 2d array
    for(i = 0; i < 5; i++){
        for(j = 0; j<2; j++){
            printf("a[%d][%d] = %d\n", i,j,a[i][j]);
        }
    }
    return 0;
}



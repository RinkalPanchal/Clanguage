// Printing elements of two dimensional array
/*#include<stdio.h>

int main()
{
    int a[5][2]={{0,1},{2,3},{5,6},{2,7},{9,0}};
    int i,j;

    for(i = 0; i < 5; i++){
        for(j = 0; j<2; j++){
            printf("a[%d][%d] = %d\n", i,j,a[i][j]);
        }
    }
    return 0;
}*/


// printing two dimensional array as matrix in rows and column

#include<stdio.h>

int main()
{
    int a[3][5]={1,2,3,4,5, 6,7,8,9,10, 11,12,13,14,15};
    int i,j;

    for(i = 0; i < 3; i++){
        for(j = 0; j<5; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

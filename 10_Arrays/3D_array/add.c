//Add two 3d arrays 

#include<stdio.h>

int main(){
    int i,j,k;
    int a[2][2][2] = {
        {{1,2},{5,6}},
        {{4,8},{9,10}}
    };

     int b[2][2][2] = {
        {{1,2},{5,6}},
        {{4,8},{9,10}}
    };

    int c[2][2][2];

    for( i =0 ; i < 2; i++){
        for( j = 0 ; j < 2; j++){
            for(k = 0 ; k < 2; k++)
            c[i][j][k] = a[i][j][k] + b[i][j][k];
        }
    }

    printf(" Resultant matrix :\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j<2;j++){
            for(k = 0;k < 2;k++){
            printf("%4d",c[i][j][k]);
        }
        printf("\n");
        }
        printf("\n") ;
    }
    return 0;

}
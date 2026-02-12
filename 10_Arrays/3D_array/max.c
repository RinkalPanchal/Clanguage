//find maximum element in  3d array

#include<stdio.h>

int main(){

    int i,j,k;
    int a[2][2][2] = {
        {{2,3},{7,8}},
        {{10,12},{13,17}}
    };

    int max = a[0][0][0];    //Assume that the first element is maximum
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2;k++)
            if(max < a[i][j][k])
                max = a[i][j][k];
        }
    }
    printf(" Maximum element in an 3d array :%d\n", max);

    return 0;
}
// sum of 3D matrix

#include <stdio.h>

int main(){
    int i,j,k;
    int sum = 0;
    int a[2][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };

    for(i = 0; i < 2;i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2 ; k++)
            sum += a[i][j][k];
        }
    }

    printf("Sum = %d\n",sum);
    return 0;
}
// count even numbers in 3d array

#include<stdio.h>

int main(){
    int i,j,k;
    int a[2][2][3] = {
        {{1,2,3},{4,5,6}},
        {{7,8,9},{10,11,12}}
    };

    int count = 0;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 ; j++){
            for(k = 0; k < 3; k++){
                if(a[i][j][k] % 2 == 0){
                count++;
                }
            }
        }
    }

    printf("Total even numbers : %d\n",count);

    return 0;
}
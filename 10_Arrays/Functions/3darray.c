//passing 3d array to function

#include<stdio.h>

void display(int a[2][2][2]){
    int i,j,k;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 ;j++){
            for(k = 0; k < 2; k++){
            printf("%4d",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(){
    int a[2][2][2] = {
        {{1, 2},{3,4}},
        {{5,6},{7,8}}
    };

    display(a);

    return 0;
}
//Printing the 3D array as a matrix 
#include<stdio.h>

int main(){
    int i,j,k;
    int a[3][3][3]={
        {
         {11, 12, 13},
         {14, 15, 16},
         {17, 18, 19}
      },
      {
         {21, 22, 23},
         {24, 25, 26},
         {27, 28, 29}
      },
      {
         {31, 32, 33},
         {34, 35, 36},
         {37, 38, 39}
      },
    };

    printf("printing array 3d elements:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3;j++ ){
            for(k = 0; k < 3; k++){
                printf("%4d",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
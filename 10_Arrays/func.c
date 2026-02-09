//Pass two dimensional array to function

#include <stdio.h>

int twoDarr(int arr[2][3]);            //Function Declaration

int main() {
    int arr[2][3] = {{10, 34, 21}, {78, 5, 25}};
    twoDarr(arr);         //Function call
    return 0;
}

int twoDarr(int arr[2][3]) {            //Function Definition
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

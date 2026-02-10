//To find the Sum of main diagonal and off diagonal


#include <stdio.h>

//Function declaration and definition
int maindiagonal(int A[3][3])
{
    int i;
    int sum = 0;

    for(i = 0; i < 3 ; i++)
            sum += A[i][i];

        return sum;    
    
}

//Function declaration and definition
int offdiagonal(int A[3][3]){

    int i;
    int sum = 0;

    for( i = 0; i< 3;i++)
        sum += A[i][3-i-1];

        return sum;
}

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Main diagonal of the Matrix A : %d\n", maindiagonal(A)); //Function call
    
    printf("Off diagonal of the Matrix A : %d\n", offdiagonal(A));    //Function call

    return 0;
}

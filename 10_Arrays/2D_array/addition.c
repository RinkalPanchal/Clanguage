// Addition of the Two Matrix


#include <stdio.h>


void add(int A[2][2], int B[2][2], int C[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];
}

// This function prints the matrix
void printmatrix(int D[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", D[i][j]);
        printf("\n");
    }
}


int main()
{
    int A[2][2] = {{0,3},{1,3}};
    int B[2][2] =   {{4,5},{8,3}};

    // To store result
    int C[2][2];
    int i, j;

    printf("Matrix A is \n");
    printmatrix(A);

    printf("Matrix B is \n");
    printmatrix(B);

    add(A, B, C);

    printf("Result matrix is \n");
    printmatrix(C);

    return 0;
}
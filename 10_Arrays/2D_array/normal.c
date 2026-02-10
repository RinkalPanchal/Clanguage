//To find the normal of the matrix A

#include <math.h>
#include <stdio.h>

//Function declaration and definition
double normal(int A[3][3])
{
    int i, j;
    int sum = 0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum += A[i][j] * A[i][j];
        }
    }

    return sqrt(sum);
}

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Normal of the Matrix A : %.2f\n", normal(A));     //Function call

    return 0;
}

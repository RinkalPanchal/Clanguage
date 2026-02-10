//To find the Trace of the matrix A

#include <stdio.h>

//Function declaration and definition
int trace(int A[3][3])
{
    int i;
    int sum = 0;

    for(i = 0; i < 3 ; i++)
            sum += A[i][i];

        return sum;    
    
}

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Trace of the Matrix A : %d\n", trace(A));     //Function call

    return 0;
}

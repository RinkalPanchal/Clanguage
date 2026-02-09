//Multiplication of the two matrics by taking input from the user

#include <stdio.h>

#define MAX 50

int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum;

    /* Matrix A input */
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Matrix B input */
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &brows, &bcolumns);

    /* Check multiplication condition */
    if (acolumns != brows)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < brows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Matrix multiplication */
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            sum = 0;
            for (k = 0; k < acolumns; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
        }
    }

    /* Output result */
    printf("\nResultant Matrix:\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

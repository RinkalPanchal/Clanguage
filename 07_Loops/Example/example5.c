#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)           // row loop
    {
        for (j = 1; j <= 2*n - 1; j++) // column loop
        {
            if (j >= (n - i + 1) && j <= (n + i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

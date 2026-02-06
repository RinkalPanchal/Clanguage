// Print the Pascal Triangle
#include <stdio.h>

int main()
{
    int i, j, n;
    int coef;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)     
    {
        coef = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);    //pascal formula
        }
        printf("\n");   // new line after each row
    }

    return 0;
}

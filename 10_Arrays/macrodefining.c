//Using MAcro , print array elements

#include <stdio.h>

#define N 5   // Define Macro

int main()
{
    int a[N], i;

    // Input array elements
    for(i = 0; i < N; i++)
    {
        printf("Enter the value of index %d: ", i);
        scanf("%d", &a[i]);
    }

    // Print array elements
    printf("\nNumber of array elements:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

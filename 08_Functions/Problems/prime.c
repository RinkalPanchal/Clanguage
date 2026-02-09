// Check a number is prime or not

#include <stdio.h>

int prime(int n)
{
    if (n <= 1)
        return 0;        // not prime

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;   // not prime
        }
    }

    return 1;   // prime
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (prime(n))
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}

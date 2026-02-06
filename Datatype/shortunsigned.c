#include<stdio.h>
#include<limits.h>

int main()
{
    short unsigned int var1 = 0;
    short unsigned int var2 = USHRT_MAX;

    printf("Range of short unsigned integer is from :%u to %u\n", var1,var2);
    return 0;
}
#include<stdio.h>
int main()            //example of local variable
{
    int var=3;
    {
        int var=4;
        printf("%d\n",var);
    }
    printf("%d\n",var);
    return 0;
}


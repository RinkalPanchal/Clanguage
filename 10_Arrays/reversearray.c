// To print the numbers in reverse order 

#include<stdio.h>

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};    //Defining the array elements 
    int i;

    for(i=0; i<9; i++)            //Print the elements in a same order
    {
        printf("%2d",a[i]);
    }
    
    printf("\n");

    for(i=8;i>=0;i--)             //print the elements in the reverse order
    {
        printf("%2d",a[i]);
    }

        printf("\n");
    return 0;

}
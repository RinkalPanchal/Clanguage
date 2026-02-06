//Swapping the values using call by value


#include <stdio.h>
void swap(int x, int y);

int main()
{
    int a=200;
    int b=300;
    printf("After swap: value of a =%d\n",a);
    printf("After Swap: value of b = %d\n",b);

    swap(a,b);

    printf("Before swap:value of a =%d\n",a);
    printf("Before swap:value of b=%d\n", b);

    return 0; 
}
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y =temp;
    return;
}
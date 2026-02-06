//Find the area of the rectangle

#include<stdio.h>

int areaofrect(int length, int breadth)
{
    int area;
    area= length*breadth;
    return area;
}

int main()
{
    int l=10,b=5;
    int area1 = areaofrect(l,b);
    printf("%d\n",area1);

    l=20, b=80;
    int area2= areaofrect(l,b);
    printf("%d\n",area2);

    return 0;
}





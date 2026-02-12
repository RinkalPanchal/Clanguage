// Using pointers to print 2d array

#include<stdio.h>

int main(){

    int a[2][2] = {{1,2},{3,4}};
    int *p;

    for(p = &a[0][0]; p <= &a[2-1][2-1] ; p++){       // print 2d array in row major order
        printf("%4d", *p);
    }
        printf("\n");
    return 0;
}
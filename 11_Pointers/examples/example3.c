//Pointer pointing to an entire 2d array
 
#include<stdio.h>

int main(){

    int a[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3] = a;
    printf("%d %d\n", (*p)[1] , (*p)[2]);
    ++p;
    printf("%d %d\n", (*p)[0] , (*p)[1]);

    return 0;
}


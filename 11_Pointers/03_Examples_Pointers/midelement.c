//access the mid element of an array , Returning Pointer

#include<stdio.h>

int *midelement(int a[5]){
    return &a[5/2];
}

int main(){
   
    int a[5] = {1,2,3,4,5};

   int *mid = midelement(a);
    printf(" mid element of an array is :%d\n", *mid);
    return 0;
}
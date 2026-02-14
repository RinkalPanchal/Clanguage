//program to find the maximum number in an array using pointers

//Function Returning Pointer

#include<stdio.h>

int maximum(int a[5] , int *max){

     *max = a[0];

    for(int i = 1; i < 5; i++){
        if(*max < a[i])
            *max = a[i];
    }        
}

int main(){

    int max;
    int a[5] = {10,3,19,20,18};

    maximum(a,&max);
    printf("Maximum element is :%d\n",max);

    return 0;
}
//program to print minimum element in an array using pointer

#include<stdio.h>

int minimum(int a[5], int *min){

    *min = a[0];

    for(int i = 0; i < 5; i++){
        if(*min > a[i]){
            *min = a[i];
        }
    }
}

int main(){
    int min;
    int a[5]={10,15,3,20,6};

    minimum(a,&min);
    printf("Minimum element is ;%d\n",min);
    return 0;
}
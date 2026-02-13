// Malloc Function

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,n;
    printf("Enter number of integers:\n");
    scanf("%d",&n);
    int *p =(int *)malloc(n*sizeof(int));

    if(p == NULL){
        printf("Memory is not allocated");
        exit(1);
    }

    for(i = 0;i < n; i++){
        printf("enter the integer: ");
        scanf("%d" , p + i);
    }

    for(i = 0; i < n ; i++){
        printf("%4d",*(p + i));
    }
    printf("\n");
    return 0;
}
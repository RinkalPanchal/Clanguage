// Reallocation Dynamic memmory

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;

    int *p = (int *)malloc(2*sizeof(int));

    if(p == NULL){
        printf("Memory is not available");
        exit(1);
    }

    for(i = 0; i < 2; i++){
        scanf("%d", p + i);
    }

    p = (int *)realloc(p,4*sizeof(int));       //Change size of memory wihout losing old data

    if(p == NULL){
        printf("Memory is not available");
        exit(1);
    }

    for(i = 2; i <4 ; i++){
        printf("Enter other 2 numbers:");
        scanf("%d",p + i);
    }

    for(i = 0; i < 4 ; i++){
        printf("%4d", *(p + i));
    }

    printf("\n");
    return 0;
}
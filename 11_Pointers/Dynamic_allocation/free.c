// Free Function of dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int *input(){
    int i;
    int *p = (int *)malloc(5*sizeof(int));
    for(i = 0; i < 5; i++){
        printf("Enter the integer:");
        scanf("%d", p +i);
    }
    return p;
}

int main(){
    int i, sum = 0;
    int *p = input();
    for( i = 0; i < 5 ; i++){
        sum += *(p + i);
    }
    printf("Sum is :%d\n" , sum);
    free(p);         // release the memory at the end
    p = NULL;      // Reinitialize the pointer with null memory location
    return 0;
}


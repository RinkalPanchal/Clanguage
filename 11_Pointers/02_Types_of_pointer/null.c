// Null Pointer

#include<stdio.h>

int main(){
    
    int *p = NULL;    // It is not points to any memory location

    if(p == NULL){
        printf("Pointer P is a null pointer\n");
    }
    else{
        printf("%d\n",*p);
    }
    return 0;
}
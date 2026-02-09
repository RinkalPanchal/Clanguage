// Calculate power using recursion

#include <stdio.h>

int power(int x,int y){

    int result = 1;

    for(int i = 0;i < y; i++)
            result = result * x;

        return result;    
}

int main(){
    int x = 2,y = 3;

    printf("The power is%d\n",power(x,y));

    return 0;
}
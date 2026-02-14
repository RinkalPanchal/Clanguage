//Passing array as an argument to a function

#include<stdio.h>

int sum(int b[3]){         
    int i,sum = 0;
    for(i = 0; i < 3; i++){
        sum += b[i];
    }
    return sum;
}

int main(){

    int a[3] = {1,2,3};
    int c = sum(a);    // calling function with a base address of an array
    printf("%d\n", c);
    return 0;

}
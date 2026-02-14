// Array of function pointers with parameters

#include <stdio.h>

// Function 1: Adds two numbers
int add(int a, int b){
    return a + b;
}

// Function 2: Subtracts two numbers
int sub(int a , int b){
    return a - b;
}

// Function 3: Multiplies two numbers
int mul(int a, int b){
    return a * b;
}

int main(){

    // Declaration of an array of 3 function pointers
    // Each pointer:
    //  - points to a function
    //  - takes two int parameters
    //  - returns int
    int (*fp[3])(int, int) = {add, sub, mul};

    // fp[0] → points to add
    // fp[1] → points to sub
    // fp[2] → points to mul

    // Calling add function using function pointer
    printf("Addition : %d\n" , fp[0](10,5));

    // Calling sub function using function pointer
    printf("Subtraction : %d\n" , fp[1](10,5));

    // Calling mul function using function pointer
    printf("Multiplication : %d\n" , fp[2](10,5));

    return 0;
}

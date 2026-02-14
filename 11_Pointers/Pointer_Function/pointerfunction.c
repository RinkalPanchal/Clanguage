// Function Pointer

#include<stdio.h>

int add(int a , int b){
    return a + b;
}

int main(){

    int (*fp)(int a, int b);    //function pointer declaration with arguments

    fp = &add;              // assign function
    int c = fp(10,10);         //  call using pointer

    printf("%d\n" , c);

    return 0;

}



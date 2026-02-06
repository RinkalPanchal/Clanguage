#include<stdio.h>

void fun(){
    static int i = 1;
    printf("i=%d\n",i);
    i++;
}

int main(){

    fun();
    fun();
    fun();

    return 0;
}
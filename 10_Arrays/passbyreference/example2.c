//finding the minimum number in array by using call by reference 

#include<stdio.h>

int minimum(int *a, int length);    //Function declaration

int main(){

    int a[] ={10,21,2,78,42};
    int length = sizeof(a)/sizeof(int);
    int min = minimum(a,length);      //Function call
    printf("Minimum nuber is %d\n",min);

    return 0;
}

int minimum(int *a, int length){       //Function Definition

    int min = *a;
    int i;

    for(i = 0; i< length; i++){
        printf("a[%d] = %d\n",i,*a);
        if(*a<min)
        min = *a;
        a++;  
    }
    


    return min;  
}
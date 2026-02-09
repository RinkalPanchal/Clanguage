//finding the maximum number in array by using call by reference 

#include<stdio.h>

int maximum(int *a, int length);    //Function declaration

int main(){

    int a[] ={10,21,2,78,42};
    int length = sizeof(a)/sizeof(int);
    int max = maximum(a,length);      //Function call
    printf("Maximum nuber is %d\n",max);

    return 0;
}

int maximum(int *a, int length){       //Function Definition

    int max = *a;
    int i;

    for(i = 0; i< length; i++){
        printf("a[%d] = %d\n",i,*a);
        if(*a>max)
        max = *a;
        a++;  
    }
    


    return max;  
}
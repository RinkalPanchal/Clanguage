// Sum of array elements using pointers

#include<stdio.h>

int main(){

    int a[] = {1,2,3,4,5}; 
    int sum = 0 , *p;       //Declaration of pointer
    
    for(p = &a[0]; p <= &a[4] ; p++){        // (p = a ; p <= a+4; p++)
        sum += *p;
    }

    printf("Sum of array elements is : %d\n" , sum);

    return 0;
}
//Reverse array in c

#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5}; ///Declaring and initializing an array

    int n = sizeof(a)/sizeof(a[0]);    // find the size of an array

    printf("Array elements\n");      //Printing the array in same order
    for(int i = 0; i < n; i++){
        printf("%4d",a[i]);
    }

    printf("\n");

    printf("Reverse array elements\n");     //printing the array in reverse order 
    for(int i = n-1;i >= 0;i--){
        printf("%4d",a[i]);
    }

    return 0;
}
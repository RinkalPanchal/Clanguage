//Find Minimum  Value in array

#include<stdio.h>

int main(){

    int a[]={10,56,7,25,18};  //Declaring and initialize an array

    int n = sizeof(a)/sizeof(a[0]);     //Find the size of an array

    int min = a[0];          //Assume first element is minimum

    for(int i = 1; i<n; i++){      //Find the minimum value an store it in
        if(min > a[i])
            min = a[i];
    }
    printf("Minimum elements is:%d\n",min);

    printf("Array elements");        //Print the array elements
    for(int i = 0; i < n; i++){
        printf("%4d",a[i]);
    }

    printf("\n");

   
    return 0;
}
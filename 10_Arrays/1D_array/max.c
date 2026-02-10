//Find Maximum Value in array

#include<stdio.h>

int main(){

    int a[]={10,7,25,56,18};  //Declaring and initialize an array

    int n = sizeof(a)/sizeof(a[0]);     //Find the size of an array

    int max = a[0];          //Assume that  the first element of an array is maximum 

    for(int i = 1; i<n; i++){      //Find the maximum value an store it in
        if(max < a[i])
            max = a[i];
    }
    printf("Maximum elements is:%d\n",max);

    printf("Array elements");        //Print the array elements
    for(int i = 0; i < n; i++){
        printf("%4d",a[i]);
    }

    printf("\n");

   
    return 0;
}
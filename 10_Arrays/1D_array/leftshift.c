// rotate array : left shift by 1

#include<stdio.h>

int main(){

    int a[5];
    int n,i,store;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter all the elements:");
    for(i = 0; i< n; i++){
        scanf("%d",&a[i]);
    }

    store = a[0];       //store the 1st element of array

    for(i = 0; i < n-1; i ++){         //Perform left shift operation
        a[i] = a[i +1];
    }

    a[n - 1] = store;            // Put the store value at the end 

    printf("final array :");
    for(i = 0; i < n; i ++){
        printf("%4d", a[i]);
    }

    printf("\n");
    return 0;
}
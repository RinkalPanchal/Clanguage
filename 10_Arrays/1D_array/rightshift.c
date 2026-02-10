// rotate array : Right shift by 1

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

    store = a[n -1];             // Store the last element of an array

    for(i = n-1; i > 0; i --){         //Perform Right Operation
        a[i] = a[i -1];
    }

    a[0] = store;          // Put the store element in the begining of an array

    printf("final array :");
    for(i = 0; i < n; i ++){
        printf("%4d", a[i]);
    }

    printf("\n");
    return 0;
}
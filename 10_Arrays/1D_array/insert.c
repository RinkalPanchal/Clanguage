// To Insert an element in an array

#include<stdio.h>

int main(){

    int a[4];
    int value,pos,i,n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements of an array");
    for(i = 0; i < n ;i ++){
        scanf("%d", &a[i]);
    }

    printf("Enter the Position of insertion:");    //Take input position from user
    scanf("%d",&pos);

    printf("Enter the value of insertion:");     // Take input value from user
    scanf("%d",&value);

    for(i = n; i >= pos ;i--){      //Shift elements to right
        a[i] = a[i - 1];
    }

    a[pos -1] =value;     //convert position to index
    n++;    //increase the size by 1


    printf("Array elements \n");
    for(i =0; i<n;i++){
        printf("%4d",a[i]);
    }

    printf("\n");

    return 0;

}
//Delete an element in an array

#include<stdio.h>

int main(){

    int a[5];
    int pos,i,n;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf("Enter all elements:");
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the Position :");  //Take input position from user
    scanf("%d", &pos);

    for(i = pos -1; i < n -1;i++){   //Shift elements to left
        a[i] = a[i + 1];
    }

    n--;

    printf("Final Array:");    //print the final array
    for( i = 0; i < n; i++){
        printf("%4d",a[i]);
    }

    printf("\n");

    return 0;
}
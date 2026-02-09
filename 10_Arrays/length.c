// variable length array 

#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of elements you want to reverse:");   // Length input of array from user 
    scanf("%d",&n);
    int a[n];

    int i;
    printf("Enter the all %d  elements :\n",n);    // take elements input from the user 
    for(i = 0; i < n;i++){
        scanf("%d",&a[i]);
    }

    printf("Elements in reverse order:\n");
    for(i = n - 1;i>=0; i--)
        printf("%4d",a[i]);

    return 0;    


}
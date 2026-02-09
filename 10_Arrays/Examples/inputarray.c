//Take arrays and size,fills with user input

#include<stdio.h>

//Declaration and Definition of the functions
int inputarray(int a[], int n){
        for(int i =0;i<n;i++)
        scanf("%d",&a[i]);
}

int main(){

    int a[10],i,n;
    printf("Enter Size:");            
    scanf("%d",&n);

    printf("Enter Elements:");
    inputarray(a,n);           // Calling function to take input of elements from the user 

    for(i = 0; i < n; i++)     //Print the elements in array
        printf("%4d",a[i]);


    printf("\n");

    return 0;    

}
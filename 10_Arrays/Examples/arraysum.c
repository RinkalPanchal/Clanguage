#include <stdio.h>
int sum(int a[], int n){
    int i, total = 0;
    
    for(i = 0; i<n; i++){
        total = total + a[i];

    }

    return total;
}

int main(){
    int a[100],i,n;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter all elements :");
    for(i = 0; i < n;i++)
        scanf("%d",&a[i]);

    printf("The Sum of the array is:%d\n",sum(a,n));

    return 0;

}
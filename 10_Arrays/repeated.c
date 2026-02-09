// To see if input numbers is repeated or not 
#include<stdio.h>

int main()
{
    //initialize all position in the array by 0 
    int seen[10]={0};
    int N;
    printf(" enter the input:");
    scanf("%d",&N);

    int rem;
    while(N>0){
        rem=N%10;        // It gives the reminder 
        if(seen[rem]==1)     //It see that if the digit is seen before or not 
        break;
        seen[rem]=1;    //replace the value by 1 in the place of 0
        N=N/10;      // it gives the quotient
    }

    
    if(N>0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
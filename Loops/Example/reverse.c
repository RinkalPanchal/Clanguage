#include <stdio.h>

int main(){
    int n = 0;
   
    printf("enter number:");
    scanf("%d",&n);

   
    while(n>=0){
        printf("%d\n",n);
        n--;
    }
    return 0;
}   
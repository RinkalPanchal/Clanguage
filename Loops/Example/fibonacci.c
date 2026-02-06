#include <stdio.h>

int main(){
    int n,i;
    int t1 = 0,t2 = 1,next;

    printf("Enter number of terms:");
    scanf("%d",&n);

    for(i = 1; i <=n ;i++){
        if(i == 1){
            printf("%d",t1);
        }
        else if(i == 2){
            printf("%d", t2);
        }
        else{
            next = t1 + t2;
            printf("%d", next);
            t1 = t2;
            t2 = next;
        }
    }
    return 0;
}    
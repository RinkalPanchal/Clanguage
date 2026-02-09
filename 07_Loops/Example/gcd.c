//Finding the greatest common divisor using loops

#include<stdio.h>

int main(){
    int i = 1;
    int a,b,gcd;
    
    printf("Enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);

    int min = (a<b) ? a: b;
    
    /*for(i = 1; i <=min; i++){        //using for loop
        if(a % i ==0 && b % i ==0){
            gcd = i;
        }
    }*/

  /* while(i<=min){                  // using while loop
        if(a % i ==0 && b % i ==0){
            gcd = i;           
        }i++;
    }*/

   do{                                      // using do while loop
        if(a % i ==0 && b % i ==0){
            gcd = i;                       
        }i++;
    }while(i<=min);



    printf("%d %d= %d\n",a,b,gcd);

    return 0;

}
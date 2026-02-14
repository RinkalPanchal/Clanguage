// Array of function pointers with parameters

#include <stdio.h>


int add(int a, int b){
    return a + b;
}


int sub(int a , int b){
    return a - b;
}


int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a/b ;
}


int main(){

    int x, y;
    int choice;

    printf("Enter the value of x:");
    scanf("%d" , &x);

    printf("Enter the value of y:");
    scanf("%d" , &y);
    


    int (*a[4])(int , int) = {&add , &sub , &mul , &div};
    while(1)
    {
    printf("0.add\n1.sub\n2.mul\n3.div\n");
    scanf("%d", &choice);
    
    if(choice>=0 && choice<=3){
        int result = a[choice](x,y);
        printf("result = %d\n", result);
    }
    else{
        printf("Invalid choice\n");
        break;
    }
    }
    return 0;
}

//Create menu driven program with loop

#include <stdio.h>

int main(){

    float a,b,result;
    int choice;

    do{
        
        printf("\n-----MENU----\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                    printf("Enter Number A and B:\n");
                    scanf("%f %f",&a,&b);
                    result = a + b;
                    printf("Result is :%f",result);
                    break;

            case 2:
                    printf("Enter Number A and B:\n");
                    scanf("%f %f",&a,&b);
                    result = a - b;
                    printf("Result is :%f",result);
                    break;

            case 3:
                    printf("Enter Number A and B:\n");
                    scanf("%f %f",&a,&b);
                    result = a * b;
                    printf("Result is :%f",result);
                    break; 

            case 4:
                    printf("Enter Number A and B:\n");
                    scanf("%f %f",&a,&b);
                    result = a / b;
                    printf("Result is :%f",result);
                    break;  

            case 5:
                    printf("Exiting Program \n");
                    break;  

            default :
                    printf("Invalid choice please try again ;");
                   
        }

    }while(choice != 5);

    return 0;
}
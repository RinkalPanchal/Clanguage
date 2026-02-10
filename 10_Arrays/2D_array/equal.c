// To check if both the matrices are equal or not 

#include <stdio.h>

int equal(int A[3][3] , int B[3][3]){     //Function declaration and definition 
    int i,j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(A[i][j] != B[i][j])       //checks if matrices are equal or not
                return 0;
        }
    }
    return 1;
}

int main(){

    int i,j;

    int A[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int B[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //Printing A matrix
    printf("Display first matrix:\n");
    for(i = 0; i < 3 ;i++){
        for(j = 0; j < 3; j++){
                printf("%4d",A[i][j]);
        }
        printf("\n");
    }

    //Printing B matrix
    printf("Display second matrix:\n");
    for(i = 0; i < 3 ;i++){
        for(j = 0; j < 3; j++){
                printf("%4d",A[i][j]);
        }
        printf("\n");
    }

    if(equal(A,B))           //Function call 
        printf("Matrices are equal");
    else 
        printf("Matrices are not equal");

    printf("\n")    ;

    return 0;    

}
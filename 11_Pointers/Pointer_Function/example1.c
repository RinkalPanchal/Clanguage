//Passing an array pointer to a function

//Performing the square , cube and square root operations

#include<stdio.h>
#include<math.h>

int array(int x , float *a){

    a[0] = pow(x,2);
    a[1] = pow(x,3);
    a[2] = pow(x,0.5);
}

int main(){

    int x = 10;
    float a[3];

    array(x,a);

    printf("Square of %d: %f\n", x, a[0]);
    printf("cube of %d: %f\n", x, a[1]);
    printf("Square root of %d: %f\n", x, a[2]);

    return 0;

}
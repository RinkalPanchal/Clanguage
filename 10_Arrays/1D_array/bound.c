//Lower and Upper bound and size of array

#include <stdio.h>
int  main() {
   int num[10] = {50, 55, 67, 73, 45, 21, 39, 70, 49, 51};  //initialization and declaration of array
   int size = sizeof(num) / sizeof(int);   //size of array
   printf("element at lower bound num[0]: %d at upper bound: %d Size of array: %d", 
   num[0], num[size-1], size);
   return 0;
}
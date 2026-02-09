//Adding the elements of the row

#include <stdio.h>

int  main() {
   //// Declare and initialize a 2D array with 3 rows and 5 columns
   int arr[3][5] = {{1,2,3,4,5}, {10,20,30,40,50}, {5,10,15,20,25}};
   int i, j;
   int sum;

   for (i=0; i<3; i++){
    sum=0;                     // Initialize sum to 0 for every new row
      for (j=0; j<5; j++){
         sum+=arr[i][j];          // Add each element of the row to sum
      }
      printf("Sum of row %d: %d\n", i, sum);
   }
   return 0;
}
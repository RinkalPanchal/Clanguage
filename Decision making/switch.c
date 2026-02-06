#include <stdio.h>
 
int main(){

   /* local variable definition */
   char grade = 'B';

   switch(grade){
      case 'A' :
         printf("Outstanding!\n" );
         break;
      case 'B':
        printf("Excellent!\n");
        break;
      case 'C':
         printf("Well Done\n" );
         break;
      case 'D':
         printf("You passed\n" );
         break;
      case 'F':
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   printf("Your grade is  %c\n", grade);
 
   return 0;
}
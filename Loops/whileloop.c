/*#include <stdio.h>
int main()
{
    int a=1;
    while(a<=5){
        printf("Hello World\n");
        a++;
    }
    printf("End of the loop \n");
    return 0;
}*/

/*#include <stdio.h>

int main(){

   // local variable definition 
   char choice = 'a';

   int x = 0;

   // while loop execution
   while(x >= 0){
      (x % 2 == 0) ? printf("%d is Even \n", x) : printf("%d is Odd \n", x);

      printf("\n Enter a positive number: ");
      scanf("%d", &x);
   }
   printf("\n End of loop");
   return 0;
}*/


#include <stdio.h>

int main(){

   // local variable definition
   int a = 10, b = 0;

   // while loop execution
   while(a != b){
      a--;
      b++;
      printf("a: %d b: %d\n", a,b);
   }
   printf(" End of loop\n");
   return 0;
}
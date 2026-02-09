/*#include <stdio.h>

int main(){
   int a;

   for(a = 1; ; a++){
      printf("a: %d\n", a);
      if(a == 5)
      break;
   }
   return 0;
}*/


/*#include <stdio.h>

int main(){
   int a, b;

   for(a = 1, b = 1; a <= 5,b<=5; a++, b++){
      printf("a: %d b: %d a*b: %d\n", a, b, a*b);
   }

   return 0;
}*/

#include <stdio.h>
int main(){
   int a;

   // for loop execution
   for(a = 5; a >= 1; a--){
      printf("a: %d\n", a);
   }

   return 0;
}
/*#include <stdio.h>

int main(){

   int phy = 50;
   int maths = 60;

   if (phy < 50 && maths < 50){     // Logical AND operator
      printf("Result:Fail");
   }
   else {
      printf("Result:Pass");
   }

   printf("\n");
   
   return 0;
}*/ 

/*#include <stdio.h>

int main(){

   int phy = 50;
   int maths = 60;

   if (phy >= 50 || maths < 50){    // Logical OR operator
      printf("Result:Pass");
   }
   else {
      printf("Result:Fail");
   }

   printf("\n");
   
   return 0;  
} */  

/*#include <stdio.h>

int main(){

   int i = 0;

   while (!(i > 5)){            // Logical Not operator
      printf("i = %d\n", i);
      i++;
   }
   
   return 0;
}*/

#include <stdio.h>

int main()
{
   int a=5, b=3;
   int incr;

   incr=(a<b)&&(b++);
   printf("%d\n",incr);
   printf("%d\n",b);
   return 0;
}


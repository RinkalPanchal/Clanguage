/*#include <stdio.h>
 
int main () {

   // local variable declaration
   int amount;
   float discount, net;
   
   amount = 2500;  
   
   if (amount < 1000){
      discount=0;
   }
   if (amount >= 1000 && amount<5000){
      discount=5;
   }
   if (amount >= 5000){
      discount=10;
   }
   net = amount - amount*discount/100;
   printf("Amount: %d Discount: %f Net payable: %f\n", amount, discount, net);
   
   return 0;
}*/


#include <stdio.h>

int main (){
   
   int phy, maths;
   float avg;
   
   phy = 50; maths = 50; 
   avg = (float)(phy + maths)/2;
   printf("Phy: %d Maths: %d Avg: %f\n", phy, maths, avg);
    
   if (avg >= 50 && (maths >= 35 && phy >= 35)){
      printf("Result: Pass");
   }

   if (avg<50) {
      printf("Result: Fail\n");
   }
   return 0;
}


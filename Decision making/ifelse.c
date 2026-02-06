#include <stdio.h>

int main() {
   int items = 72;  
  
   if (items >= 90) {
      printf("Store is full");
   } else if (items >= 80) {
      printf("Need few more items");
   } else if (items >= 70) {
      printf("Store is partially full");
   } else if (items >= 50) {
      printf("Sore is half full");
   } else {
      printf("Store is empty");
   }
   printf("\n");

   return 0;
}
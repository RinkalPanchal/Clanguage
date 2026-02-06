/*Print the numbers from 1 to 10 in such a way that number is odd then add 1 and number is even 
 then subtract 1*/

 // Example of indirect recursion

 #include <stdio.h>

void odd();
void even();

int n = 1;

void odd() {
    if (n <= 10) {
        printf("%d ", n + 1);  // odd → add 1
        n++;
        even();
    }
}

void even() {
    if (n <= 10) {
        printf("%d ", n - 1);  // even → subtract 1
        n++;
        odd();
    }
}

int main() {
    odd();
    return 0;
}

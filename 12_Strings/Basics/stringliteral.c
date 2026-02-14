// String Literal -- Sequence of character ended by double quotes

#include <stdio.h>

int main() {
    char *p = "Hello";   // stored in read-only memory
    char arr[] = "Hello"; // stored in writable memory

    arr[0] = 'h';  
    // p[0] = 'h'; 

    printf("%s\n", arr);
    return 0;
}

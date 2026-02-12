// Pointer Assignment Example

#include <stdio.h>

int main() {

    int i = 10;

    int *p, *q;   // Pointer declaration

    p = &i;       // p is initialized with address of i

    q = p;        // q now also points to i (q is initialized here)

    printf("%d %d\n", *q, *p);   // Both print value of i

    return 0;
}

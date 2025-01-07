#include <stdio.h>

int main() {
    int x = 10;     // Regular integer variable
    int *p;         // Pointer to an integer

    p = &x;         // Assign the address of x to pointer p

    printf("Value of x: %d\n", x);         // Prints the value of x
    printf("Address of x: %p\n", &x);     // Prints the address of x
    printf("Value of p (address of x): %p\n", p); // Prints the value of p (address of x)
    printf("Value pointed to by p: %d\n", *p);    // Dereference pointer p to get the value of x

    return 0;
}

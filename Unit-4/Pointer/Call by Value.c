#include <stdio.h>

// Function that adds two numbers
void add(int x, int y) {
    x = x + y;  // Modify x inside the function (this does not affect the original argument)
    printf("Inside function: x = %d\n", x);
}

int main() {
    int a = 5, b = 10;

    // Calling the function with call by value
    add(a, b);

    // The original values of a and b are unchanged outside the function
    printf("Inside main: a = %d, b = %d\n", a, b);

    return 0;
}

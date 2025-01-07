#include <stdio.h>

// Function to swap two numbers using pointers (call by reference)
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside function: x = %d, y = %d\n", *x, *y);
}

int main() {
    int a = 5, b = 10;

    // Calling the function with call by reference
    swap(&a, &b);

    // After swapping, the original values of a and b are changed
    printf("Inside main: a = %d, b = %d\n", a, b);

    return 0;
}

#include <stdio.h>

// Function to calculate Fibonacci using recursion
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &terms);

    if (terms < 0) {
        printf("Number of terms cannot be negative.\n");
    } else {
        printf("Fibonacci sequence up to %d terms:\n", terms);
        for (int i = 0; i < terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}

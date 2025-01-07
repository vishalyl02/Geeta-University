#include <stdio.h>

// Function to calculate power of 2 using recursion
int powerOfTwo(int n) {
    // Base case: smallest problem
    if (n == 0) {
        return 1; // 2^0 = 1
    }
    // Recursive case: bigger problem using smaller problem
    return 2 * powerOfTwo(n - 1);
}

int main() {
    int exponent;
    printf("Enter a non-negative integer exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Power of 2 is not defined for negative exponents.\n");
    } else {
        printf("2^%d = %d\n", exponent, powerOfTwo(exponent));
    }

    return 0;
}


#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: smallest problem
    if (n == 0 || n == 1) {
        return 1; 
    }
    // Recurrence Relation: Relation between bigger problem and smaller problem
    int smallerproblem=factorial(n-1);
    int biggerproblem=n*smallerproblem;


    // Returning the solution
    return biggerproblem;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}

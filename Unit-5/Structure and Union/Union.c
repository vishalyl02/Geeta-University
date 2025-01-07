#include <stdio.h>

// Define a union with three members of different data types
union Data {
    int i;
    float f;
    char c;
};

int main() {
    // Declare a variable of the union type
    union Data data;

    // Assign an integer value to the union
    data.i = 10;
    printf("data.i = %d\n", data.i);

    // Assign a float value to the same union variable
    data.f = 3.14;
    printf("data.f = %.2f\n", data.f);

    // Assign a character value to the same union variable
    data.c = 'A';
    printf("data.c = %c\n", data.c);

    // Accessing the values of the union members after each assignment
    printf("\nAfter assignments:\n");
    printf("data.i = %d\n", data.i);  // The value of 'i' is overwritten by 'f' and 'c'
    printf("data.f = %.2f\n", data.f);  // The value of 'f' is overwritten by 'c'
    printf("data.c = %c\n", data.c);  // This will show 'A' because it was the last assignment

    return 0;
}

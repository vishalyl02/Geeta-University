#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string

    printf("ASCII values of the characters in the string are:\n");

    // Traverse the string and print ASCII values of each character
    for (int i = 0; str[i] != '\0'; i++) {
        printf("'%c' = %d\n", str[i], str[i]); // Print character and its ASCII value
    }

    return 0;
}

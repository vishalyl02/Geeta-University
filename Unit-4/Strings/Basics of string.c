#include <stdio.h>

int main() {
    char str[100]; // Declare a string with size 100

    printf("Enter a string: ");
    scanf("%s", str); // Reads a string until a space or newline
    printf("You entered: %s\n", str);

    return 0;
}

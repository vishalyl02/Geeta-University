#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string including spaces

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upper++; // Increment uppercase count
        } else if (islower(str[i])) {
            lower++; // Increment lowercase count
        }
    }

    printf("Number of uppercase letters: %d\n", upper);
    printf("Number of lowercase letters: %d\n", lower);

    return 0;
}

#include <stdio.h>
#include <ctype.h> // For tolower function

int main() {
    char str[100];
    int vowels = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string including spaces

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase to handle both cases
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++; // Increment vowel count
        }
    }

    printf("Number of vowels: %d\n", vowels);

    return 0;
}

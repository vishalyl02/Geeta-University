#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[] = " World";

    strcat(str1, str2); // Concatenates str2 to str1
    printf("Concatenated string: %s\n", str1);

    return 0;
}

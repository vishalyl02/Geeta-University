#include <stdio.h>

int main() {
    // Open file in write mode (creating a new file)
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "John, 20, 85.5\n");
    fprintf(file, "Alice, 22, 90.2\n");

    // Close the file
    fclose(file);
    printf("File created and data written successfully.\n");

    return 0;
}

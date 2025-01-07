#include <stdio.h>

int main() {
    // Open a file named "data.txt" in write mode
    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;  // Exit if file creation fails
    }

    // Write some data to the file
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a simple file creation example.\n");

    // Close the file
    fclose(file);

    printf("File 'data.txt' created and data written successfully.\n");

    return 0;
}

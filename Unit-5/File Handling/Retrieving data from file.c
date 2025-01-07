#include <stdio.h>

int main() {
    // Open file in read mode
    FILE *file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    int age;
    float marks;

    // Read and display each student record
    while (fscanf(file, "%s %d %f", name, &age, &marks) != EOF) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", name, age, marks);
    }

    // Close the file
    fclose(file);

    return 0;
}

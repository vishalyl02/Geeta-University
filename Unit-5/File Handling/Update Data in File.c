#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("students.txt", "r+");  // Open file in read and write mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    int age;
    float marks;

    // Modify record for a specific student
    char search_name[] = "Alice";  // Name to search for
    int found = 0;

    // Temporary file to store updated records
    FILE *temp = fopen("temp.txt", "w");

    if (temp == NULL) {
        printf("Error opening temporary file!\n");
        fclose(file);
        return 1;
    }

    // Read the file and update the record if found
    while (fscanf(file, "%s %d %f", name, &age, &marks) != EOF) {
        if (strcmp(name, search_name) == 0) {
            // Update marks for Alice
            marks = 95.0;
            found = 1;
        }
        fprintf(temp, "%s %d %.2f\n", name, age, marks);  // Write updated record to temp file
    }

    if (!found) {
        printf("Record not found!\n");
    } else {
        printf("Record updated successfully.\n");
    }

    fclose(file);
    fclose(temp);

    // Remove original file and rename temp file
    remove("students.txt");
    rename("temp.txt", "students.txt");

    return 0;
}

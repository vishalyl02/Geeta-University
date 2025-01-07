#include <stdio.h>

// Define a structure for Student
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare an array of 3 Student structures
    struct Student students[3];

    // Input details for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);  // Input name
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline

        printf("Enter age: ");
        scanf("%d", &students[i].age);  // Input age

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);  // Input marks

        getchar(); // To capture the newline character left by scanf
    }

    // Display the details of each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

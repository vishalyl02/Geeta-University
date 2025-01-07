#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function to display student details (passing structure by value)
void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student student1 = {"Alice", 20, 85.5};

    // Call the function and pass the structure by value
    displayStudent(student1);

    return 0;
}

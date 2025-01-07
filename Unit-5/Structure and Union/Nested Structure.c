#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Student structure that contains Date as a member
struct Student {
    char name[50];
    int roll_no;
    struct Date dob;  // Nested structure (Date)
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Input student details
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin); // Input name

    printf("Enter student's roll number: ");
    scanf("%d", &student1.roll_no);  // Input roll number

    // Input student's date of birth
    printf("Enter student's date of birth (day month year): ");
    scanf("%d %d %d", &student1.dob.day, &student1.dob.month, &student1.dob.year);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student1.name);
    printf("Roll Number: %d\n", student1.roll_no);
    printf("Date of Birth: %02d/%02d/%d\n", student1.dob.day, student1.dob.month, student1.dob.year);

    return 0;
}

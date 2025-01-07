#include <stdio.h>

// Define the structure for Point
struct Point {
    int x;
    int y;
};

int main() {
    // Declare a variable of type struct Point
    struct Point p1;

    // Take input for the point's x and y coordinates
    printf("Enter the x coordinate: ");
    scanf("%d", &p1.x);  // Input the x coordinate

    printf("Enter the y coordinate: ");
    scanf("%d", &p1.y);  // Input the y coordinate

    // Display the entered point coordinates
    printf("\nThe point is: (%d, %d)\n", p1.x, p1.y);

    return 0;
}

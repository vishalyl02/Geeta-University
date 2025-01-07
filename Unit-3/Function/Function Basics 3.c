#include <stdio.h>

float calculate_area(float length, float width);

int main() {
    float length = 5.0, width = 3.0;
    float area = calculate_area(length, width);  // Function call
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}

float calculate_area(float length, float width) {
    return length * width;
}

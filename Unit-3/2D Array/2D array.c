#include <stdio.h>

int main() {
    int arr[3][4] = {  // Declare a 2D array with 3 rows and 4 columns
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing and printing elements of the 2D array
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < 3; i++) {       // Loop through rows
        for (int j = 0; j < 4; j++) {   // Loop through columns
            printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

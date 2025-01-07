#include <stdio.h>
#include <limits.h> // For INT_MAX

// Function to find the minimum sum of subarray of size k
int minSumSubarray(int arr[], int n, int k) {
    if (n < k) {
        printf("Invalid input: Array size is smaller than k.\n");
        return -1;
    }

    int windowSum = 0, minSum = INT_MAX;

    // Compute the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    minSum = windowSum;

    // Slide the window over the array
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i]; // Slide the window
        if (windowSum < minSum) {
            minSum = windowSum; // Update minimum sum
        }
    }

    return minSum;
}

int main() {
    int arr[] = {2, 3, 1, 4, 6, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = minSumSubarray(arr, n, k);

    if (result != -1) {
        printf("The minimum sum of a subarray of size %d is %d\n", k, result);
    }

    return 0;
}

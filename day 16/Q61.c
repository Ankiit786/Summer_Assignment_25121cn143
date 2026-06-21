#include <stdio.h>

// Function to find the missing number
int findMissingNumber(int arr[], int n) {
    // n is the total number of elements including the missing one
    int total_sum = n * (n + 1) / 2;
    int array_sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        array_sum += arr[i];
    }
    
    return total_sum - array_sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // 3 is missing here
    int n = 6;                   // Elements should be in the range 1 to 6
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);
    
    return 0;
}
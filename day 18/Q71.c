#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid; // Element found, return index
        
        if (arr[mid] < target)
            low = mid + 1; // Search in the right half
        else
            high = mid - 1; // Search in the left half
    }
    return -1; // Element not found
}

int main() {
    int n, i, target, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (in sorted/ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d (1-based position: %d)\n", result, result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
#include <stdio.h>

// Function to remove duplicates from an unsorted array in-place
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    
    int unique_idx = 0; // Tracks the position for unique elements
    
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        
        // Check if the current element was already included in the unique section
        for (int j = 0; j < unique_idx; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        // If it is not a duplicate, save it at the unique index position
        if (!is_duplicate) {
            arr[unique_idx] = arr[i];
            unique_idx++;
        }
    }
    
    return unique_idx; // Returns the new size of the array
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int new_size = removeDuplicates(arr, n);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
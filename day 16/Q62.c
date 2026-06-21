#include <stdio.h>

// Function to find the element with the maximum frequency
void findMaxFrequencyElement(int arr[], int n) {
    int max_count = 0;
    int max_element = arr[0];
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Update max tracking if a higher frequency is found
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    
    printf("Element with maximum frequency is: %d (Occurs %d times)\n", max_element, max_count);
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    findMaxFrequencyElement(arr, n);
    return 0;
}
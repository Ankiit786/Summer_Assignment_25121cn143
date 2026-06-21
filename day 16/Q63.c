#include <stdio.h>

// Function to find pairs that add up to a target sum
void findPairWithSum(int arr[], int n, int target_sum) {
    int found = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pair found with the given sum %d.\n", target_sum);
    }
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int target_sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget Sum: %d\n", target_sum);
    
    findPairWithSum(arr, n, target_sum);
    return 0;
}
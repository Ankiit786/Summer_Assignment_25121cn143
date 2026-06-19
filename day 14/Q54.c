#include <stdio.h>

int main() {
    int n, target, count = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);
    
    // Counting occurrence frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    printf("Frequency of %d is: %d\n", target, count);
    
    return 0;
}
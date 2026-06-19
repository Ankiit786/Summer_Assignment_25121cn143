#include <stdio.h>

int main() {
    int n, target, found = -1;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    // Linear Search Logic
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i;
            break; // Stop searching once the element is found
        }
    }
    
    if (found != -1) {
        printf("Element %d found at index %d (position %d).\n", target, found, found + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
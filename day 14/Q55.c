#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
    // Track largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == INT_MIN) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    
    return 0;
}
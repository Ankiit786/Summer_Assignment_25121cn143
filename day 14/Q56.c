#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    int visited[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize tracking array with 0 (unvisited)
    }
    
    printf("Duplicate elements in the array are: ");
    int has_duplicates = 0;
    
    // Find and isolate unique duplicate values
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark subsequent occurrences as visited
            }
        }
        
        if (count > 1) {
            printf("%d ", arr[i]);
            has_duplicates = 1;
        }
    }
    
    if (!has_duplicates) {
        printf("None");
    }
    printf("\n");
    
    return 0;
}
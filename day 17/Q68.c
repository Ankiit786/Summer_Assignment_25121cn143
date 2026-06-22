#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements for array 1:\n");
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements for array 2:\n");
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Common elements are:\n");
    int found = 0;
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break; // Move to the next element in arr1 to avoid duplicate prints from arr2
            }
        }
    }
    
    if(!found) {
        printf("None");
    }
    printf("\n");

    return 0;
}
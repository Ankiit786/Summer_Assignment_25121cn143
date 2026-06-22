#include <stdio.h>

int main() {
    int n1, n2, i;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Size of merged array
    int n3 = n1 + n2;
    int merged[n3];

    // Copy elements of first array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of second array
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
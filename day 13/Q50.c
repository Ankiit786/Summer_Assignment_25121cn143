#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add element to sum
    }

    average = (float)sum / n; // Calculate average

    printf("\nSum of array elements = %d", sum);
    printf("\nAverage of array elements = %.2f\n", average);

    return 0;
}
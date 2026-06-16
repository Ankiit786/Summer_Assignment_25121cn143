#include <stdio.h>

// Function to find the maximum between two numbers
int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, max;
    
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Function call
        max = findMaximum(num1, num2);
        printf("The maximum number between %d and %d is: %d\n", num1, num2, max);
    }
    
    return 0;
}
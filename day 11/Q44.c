#include <stdio.h>

// Function to calculate factorial using a loop
// Uses 'long long' to handle larger values without overflowing quickly
long long findFactorial(int n) {
    if (n < 0) {
        return -1; // Standard indicator that factorial is undefined for negative numbers
    }
    
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) == 1) {
        // Function call
        long long result = findFactorial(num);
        
        if (result == -1) {
            printf("Factorial is not defined for negative numbers.\n");
        } else {
            printf("The factorial of %d is: %lld\n", num, result);
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
// Returns true if prime, false otherwise
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    // Check for factors up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a factor, so it's not prime
        }
    }
    return true; // No factors found, it is prime
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        // Function call
        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }
    
    return 0;
}
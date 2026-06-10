#include <stdio.h>
#include <math.h>

long long maxPrimeFactors(long long n) {
    long long maxPrime = -1;

    // Handle factor 2 separately
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    // Check for odd factors from 3 up to sqrt(n)
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    // If n is still greater than 2, it is a prime number
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long n = 25698751364526;
    printf("Largest prime factor of %lld is: %lld\n", n, maxPrimeFactors(n));
    return 0;
}   
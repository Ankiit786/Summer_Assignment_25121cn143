#include <stdio.h>

double power(double x, int n) {
    long long power = n;
    double result = 1.0;
    
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }
    
    while (power > 0) {
        if (power & 1) { // If the last bit is 1
            result *= x;
        }
        x *= x;          // Square the base
        power >>= 1;     // Divide exponent by 2
    }
    return result;
}

int main() {
    printf("2.0 ^ 10 = %f\n", power(2.0, 10));
    printf("2.0 ^ -2 = %f\n", power(2.0, -2));
    return 0;
}   
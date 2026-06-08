#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1 = 12, num2 = 15;
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));
    return 0;
}   
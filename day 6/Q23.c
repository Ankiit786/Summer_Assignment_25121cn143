#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // Clears the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int num = 23; // Binary: 00010111
    printf("Set bits in %d: %d\n", num, countSetBits(num));
    return 0;
}   
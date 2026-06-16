#include <stdio.h>

// Function to calculate the sum of two numbers
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Function call
        sum = findSum(num1, num2);
        printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    }
    
    return 0;
}
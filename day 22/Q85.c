#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1; // Flag assuming true

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Characters mismatch
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome string.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome string.\n", str);
    }

    return 0;
}
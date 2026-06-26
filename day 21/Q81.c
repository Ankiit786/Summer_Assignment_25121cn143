#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length (excluding the newline character if present)
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0'; // Remove newline character
            break;
        }
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
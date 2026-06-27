#include <stdio.h>

int main() {
    char str[150];
    int i, j = 0;

    printf("Enter a string with spaces: ");
    scanf(" %[^\n]", str);

    // Shift characters left whenever a space is not encountered
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("String after removing spaces: %s\n", str);

    return 0;
}
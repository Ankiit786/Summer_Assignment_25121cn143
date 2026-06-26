#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length and remove newline character
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0';
            break;
        }
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
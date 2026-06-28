#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

void findFirstNonRepeating(char *str) {
    int count[NO_OF_CHARS] = {0};
    int i;

    // Count frequencies of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the first character with a count of 1
    for (i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            return;
        }
    }

    printf("All characters are repeating or the string is empty.\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    findFirstNonRepeating(str);
    return 0;
}
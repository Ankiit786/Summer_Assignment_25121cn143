#include <stdio.h>
#include <string.h>

void findMaxOccurring(char *str) {
    int count[256] = {0};
    int max = -1;
    char result;

    // Count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the maximum frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (max < count[(unsigned char)str[i]]) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    if (max > 0) {
        printf("Maximum occurring character is '%c', appearing %d times.\n", result, max);
    } else {
        printf("String is empty.\n");
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    findMaxOccurring(str);
    return 0;
}
#include <stdio.h>
#include <string.h>

void findCommonCharacters(char str1[], char str2[]) {
    int hash1[256] = {0};
    int hash2[256] = {0};

    // Count presence of characters in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        hash1[(unsigned char)str1[i]] = 1;
    }

    // Count presence of characters in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        hash2[(unsigned char)str2[i]] = 1;
    }

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (hash1[i] && hash2[i] && i != ' ') { // excluding spaces
            printf("%c ", i);
        }
    }
    printf("\n");
}

int main() {
    char str1[] = "hello world";
    char str2[] = "world power";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    findCommonCharacters(str1, str2);

    return 0;
}
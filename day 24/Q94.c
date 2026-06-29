#include <stdio.h>
#include <string.h>

void compressString(char *str, char *dest) {
    int len = strlen(str);
    if (len == 0) {
        dest[0] = '\0';
        return;
    }

    int j = 0; // Index for compressed destination string
    for (int i = 0; i < len; i++) {
        int count = 1;
        // Count occurrences of the current character
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        
        // Append character and its count to destination
        j += sprintf(&dest[j], "%c%d", str[i], count);
    }
}

int main() {
    char str[] = "aabcccccaaa";
    char compressed[100];

    compressString(str, compressed);

    // If compressed string is not smaller, standard practice is to keep the original
    if (strlen(compressed) < strlen(str)) {
        printf("Compressed string: %s\n", compressed);
    } else {
        printf("Original string (compression didn't reduce size): %s\n", str);
    }

    return 0;
}
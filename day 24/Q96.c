#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int hash[256] = {0}; // Extended ASCII tracking array
    int currentIdx = 0;  // Index to build the updated string in-place

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char temp = str[i];
        
        // If character hasn't been seen yet
        if (hash[temp] == 0) {
            hash[temp] = 1; // Mark as seen
            str[currentIdx++] = str[i]; // Advance in-place index
        }
    }
    str[currentIdx] = '\0'; // Properly terminate the truncated string
}

int main() {
    char str[] = "programming principles";
    printf("Original: %s\n", str);
    
    removeDuplicates(str);
    printf("After removing duplicates: %s\n", str);

    return 0;
}
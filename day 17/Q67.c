#include <stdio.h>

int main() {
    int n1, n2, i, j, l, k = 0, isAlreadyAdded;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements:\n");
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements:\n");
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int intersectArr[n1 < n2 ? n1 : n2];

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                // Check if it's already recorded in the intersection array
                isAlreadyAdded = 0;
                for(l = 0; l < k; l++) {
                    if(intersectArr[l] == arr1[i]) {
                        isAlreadyAdded = 1;
                        break;
                    }
                }
                if(!isAlreadyAdded) {
                    intersectArr[k++] = arr1[i];
                }
                break; 
            }
        }
    }

    printf("Intersection of the two arrays:\n");
    if(k == 0) {
        printf("No intersecting elements found.");
    } else {
        for(i = 0; i < k; i++) {
            printf("%d ", intersectArr[i]);
        }
    }
    printf("\n");

    return 0;
}
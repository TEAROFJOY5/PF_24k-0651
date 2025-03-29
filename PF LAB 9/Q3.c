#include <stdio.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    int found;
    
    for (int i = 0; i < size1; i++) {
        found = 0;
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("%d ", arr1[i]);
        }
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements: ");
    findCommonElements(arr1, size1, arr2, size2);
    printf("\n");

    return 0;
}

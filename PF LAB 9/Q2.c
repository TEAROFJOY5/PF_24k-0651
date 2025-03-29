#include <stdio.h>

int findUniqueElements(int arr[], int n, int result[]) {
    int i, j, k = 0;

    for (i = 0; i < n; i++) {
        int duplicate = 0;
        for (j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            result[k++] = arr[i];
        }
    }

    return k;
}

int main() {
    int arr[100], result[100];
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueCount = findUniqueElements(arr, n, result);

    printf("Unique elements are: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

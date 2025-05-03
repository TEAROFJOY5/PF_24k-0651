/*
 Design a C program using dynamic memory allocation to find the largest element in a
collection of user-inputted values. Begin by prompting the user to input the total number of
elements (ranging from 1 to 100). Subsequently, request input for each element individually, and
store them dynamically. Implement the necessary logic to identify the largest element among the
entered values. ensure proper memory management by deallocating memory after use.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    free(arr);
    return 0;
}

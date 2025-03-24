#include <stdio.h>

int main() {
    int arr[] = {4, 1, 6, 8, 10, 21, 8, 9, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    // Loop to find min and max
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    // Output result
    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);

    return 0;
}

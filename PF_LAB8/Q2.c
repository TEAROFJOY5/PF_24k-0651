#include <stdio.h>

int main() {
    int n, start;
    printf("Enter the number of arrays (n): ");
    scanf("%d", &n);
    printf("Enter the starting number: ");
    scanf("%d", &start);

    int array[2][n][2];
    int evenCount = 0, oddCount = 0;

    for (int i = start; i >= 0 && (evenCount < n || oddCount < n); i--) {
        if (i % 2 == 0 && evenCount < n) {
            array[0][evenCount][0] = i;
            array[0][evenCount][1] = i - 2;
            evenCount++;
        }
        if (i % 2 != 0 && oddCount < n) {
            array[1][oddCount][0] = i;
            array[1][oddCount][1] = i - 2;
            oddCount++;
        }
    }

    printf("Even numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d, %d]\n", array[0][i][0], array[0][i][1]);
    }
    
    printf("Odd numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("[%d, %d]\n", array[1][i][0], array[1][i][1]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter the number of rows and columns of the first matrix (r1 x c1): ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the number of rows and columns of the second matrix (r2 x c2): ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 1;
    }
    
    int first[10][10], second[10][10], result[10][10];
    
    printf("Enter elements of the first matrix (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of the second matrix (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Resultant Matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

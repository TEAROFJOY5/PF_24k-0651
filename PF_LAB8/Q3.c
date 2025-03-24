#include <stdio.h>

int main() {
    int matrix[3][3];

    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (int i = 0; i < 3; i++) {
        // Assuming the first element in the row is the smallest
        int minRow = matrix[i][0];
        int minColIndex = 0;


        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                minColIndex = j;
            }
        }
        int isSaddlePoint = 1;
        for (int j = 0; j < 3; j++) {
            if (matrix[j][minColIndex] > minRow) {
                isSaddlePoint = 0; 
                break;
            }
        }
        if (isSaddlePoint) {
            printf("Saddle point found at (%d, %d) with value %d\n", i, minColIndex, minRow);
        }
    }

    return 0;
}

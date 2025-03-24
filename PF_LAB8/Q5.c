#include <stdio.h>

int main() {
    int rows, i, j;

   
    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &rows);

 
    for (i = 1; i <= rows; i++) {
       
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); 
    }


    for (i = rows - 1; i >= 1; i--) {
     
        for (j = rows; j > i; j--) {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

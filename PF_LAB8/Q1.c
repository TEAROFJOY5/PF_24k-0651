#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++) {
        int isPrime = 1;
        if (num < 2) isPrime = 0;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

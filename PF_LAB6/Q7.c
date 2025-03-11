#include <stdio.h>

int main() {
    int start, end;

    // Taking input from the user
    printf("Enter the range (two numbers): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through the range and check for prime numbers
    for (int num = start; num <= end; num++) {
        if (num <= 1) {
            continue;  // Skip numbers less than or equal to 1
        }

        int is_prime = 1;  

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);  
        }
    }

    return 0;
}

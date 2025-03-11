/* Write a C program to compute the product of the first N prime numbers, where N is entered by the
 * user.
 */
#include <stdio.h>

int main() {
    int N, count = 0, num = 2;
    unsigned long long product = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. N must be a positive integer.\n");
        return 1;
    }

    while (count < N) {
        int is_prime = 1;  // Assume the number is prime

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  // Not a prime number
                break;
            }
        }

        if (is_prime) {
            product *= num;
            count++;
        }

        num++;
    }

    printf("The product of the first %d prime numbers is: %llu\n", N, product);

    return 0;
}

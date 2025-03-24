#include <stdio.h>

int main() {
    int a = 0, b = 1, nextTerm, sum = 0;

    printf("%d, %d", a, b);
    nextTerm = a + b;

    while (nextTerm <= 10000) {
        printf(", %d", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;

        if ((nextTerm % 3 == 0) || (nextTerm % 5 == 0) || (nextTerm % 7 == 0)) {
            sum += nextTerm;
        }
    }


    printf("\n\nThe sum of generated Fibonacci numbers divisible by 3, 5, or 7 is %d\n", sum);
    
    return 0;
}

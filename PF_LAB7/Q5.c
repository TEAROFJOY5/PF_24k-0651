#include <stdio.h>

int main() {
    for (int i = 0; i <= 6; i++) {
        // Print i if even, otherwise print a space
        printf("%s\t", (i % 2 == 0) ? (char[2]){i + '0', '\0'} : " ");  // First column
        
        // Always print i
        printf("%d\t", i);  // Second column

        // Always print i
        printf("%d\t", i);  // Third column

        // Print i if even, otherwise print a space
        printf("%s\n", (i % 2 == 0) ? (char[2]){i + '0', '\0'} : " ");  // Fourth column
    }
    return 0;
}

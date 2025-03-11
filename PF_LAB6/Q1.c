#include <stdio.h>

int main() {
    int total = 0, value;

    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &value);
        
        if (value == 0) {
            break;
        }
        
        total += value;
        printf("Current total: %d\n", total);
    }

    return 0;
}

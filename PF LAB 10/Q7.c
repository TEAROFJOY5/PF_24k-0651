#include <stdio.h>

#define M_TO_KM 0.001 

void convertAndCount(float meters) {
    static int callCount = 0;  
    callCount++;

    float kilometers = meters * M_TO_KM;
    printf("Distance: %.2f meters = %.3f kilometers\n", meters, kilometers);
    printf("This function has been called %d time(s).\n", callCount);
}

int main() {
    float inputMeters;
    char userChoice;

    do {
        printf("Enter distance in meters: ");
        scanf("%f", &inputMeters);

        convertAndCount(inputMeters);

        printf("Do you want to convert another distance? (y/n): ");
        scanf(" %c", &userChoice);
    } while (userChoice == 'y' || userChoice == 'Y');

    return 0;
}

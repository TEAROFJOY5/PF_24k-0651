#include <stdio.h>

#define MAX_TEMP 40.0  // Maximum allowable temperature in Celsius

void checkTemperature(float temp) {
    static int exceedCount = 0;  // Counts how many times temp exceeded the limit

    if (temp > MAX_TEMP) {
        exceedCount++;
        printf("Temperature %.2f°C exceeds the maximum allowed limit of %.2f°C.\n", temp, MAX_TEMP);
    } else {
        printf("Temperature %.2f°C is within the safe range.\n", temp);
    }

    printf("Number of times the temperature exceeded the limit: %d\n", exceedCount);
}

int main() {
    float inputTemp;
    char userChoice;

    do {
        printf("Enter a temperature in Celsius: ");
        scanf("%f", &inputTemp);

        checkTemperature(inputTemp);

        printf("Do you want to enter another temperature? (y/n): ");
        scanf(" %c", &userChoice);
    } while (userChoice == 'y' || userChoice == 'Y');

    return 0;
}

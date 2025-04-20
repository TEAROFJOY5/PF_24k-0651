/* Write a program that reads a series of temperature values in Celsius from the user until the user enters
 * a sentinel value (e.g., -999 to stop). The program should do the following for each temperature:
 * • Convert it to Fahrenheit using the formula F = (C * 9/5) + 32.
 * • Categorize the temperature as "Cold", "Moderate", or "Hot" based on the following criteria:
 * o Cold: Temperature below 10°C
 * o Moderate: Temperature between 10°C and 30°C (inclusive)
 * o Hot: Temperature above 30°C
 * • Create functions for the conversion and categorization. The program should display the
 * Fahrenheit value and its category after processing each input. Use loops to process multiple
 * temperatures and display a summary at the end.
 */
#include <stdio.h>

float convertToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
  return fahrenheit;
}

const char* categorizeTemperature(float celsius) {
    if(celsius < 10)
        return "Cold";
    else if(celsius <= 30)
        return "Moderate";
    else
        return "Hot";
}

int main() {
    float celsius;
    int count = 0, coldCount = 0, moderateCount = 0, hotCount = 0;

    while(1) {
        printf("Enter temperature in Celsius (-999 to stop): ");
        scanf("%f", &celsius);

        if(celsius == -999)
            break;

        float fahrenheit = convertToFahrenheit(celsius);
        const char* category = categorizeTemperature(celsius);

        printf("Fahrenheit: %.2f, Category: %s\n", fahrenheit, category);

        count++;
        if(category == "Cold")
            coldCount++;
        else if(category == "Moderate")
            moderateCount++;
        else if(category == "Hot")
            hotCount++;
    }

    printf("\nSummary:");
    printf("\nTotal temperatures entered: %d", count);
    printf("\nCold: %d", coldCount);
    printf("\nModerate: %d", moderateCount);
    printf("\nHot: %d", hotCount);

    return 0;
}

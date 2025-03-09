#include <stdio.h>

int main() {
    int age, weight;
    char conditions;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (in kg): ");
    scanf("%d", &weight);

    printf("Do you have any medical conditions? (y/n): ");
    scanf(" %c", &conditions);  // Notice the space before %c to handle the newline character from previous input.

    if ((age >= 18 && age <= 40) && (weight >= 40 && weight <= 90) && (conditions == 'n' || conditions == 'N')) {
        printf("You are eligible for a gym membership.\n");
    } else {
        printf("You are not eligible for a gym membership.\n");
    }

    return 0;
}

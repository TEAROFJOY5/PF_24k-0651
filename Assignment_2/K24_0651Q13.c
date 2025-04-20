/*  Create a program that simulates a student grading system. The user should input the student’s name
 *  and their grades for three subjects: Math, Science, and History. Each subject has a different weight:
 *  • Math: 50% weight
 *  • Science: 30% weight
 *  • History: 20% weight
 *  After calculating the weighted average, the program should determine the final grade:
 *  • Grade A: 90% or higher
 *  • Grade B: 80% to 89%
 *  • Grade C: 70% to 79%
 *  • Grade D: 60% to 69%
 *  • Grade F: below 60%
 
 *  The program should display the student's name, individual subject scores, weighted average, and final
 *  grade. Implement the weighted average calculation and grade assignment in two separate functions.
 */

#include <stdio.h>

float calculateWeightedAverage(float math, float science, float history) {
    return (math * 0.5) + (science * 0.3) + (history * 0.2);
}

char assignGrade(float average) {
    if(average >= 90)
        return 'A';
    else if(average >= 80)
        return 'B';
    else if(average >= 70)
        return 'C';
    else if(average >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    char name[100];
    float math, science, history;

    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Math score: ");
    scanf("%f", &math);
    printf("Enter Science score: ");
    scanf("%f", &science);
    printf("Enter History score: ");
    scanf("%f", &history);

    float average = calculateWeightedAverage(math, science, history);
    char grade = assignGrade(average);

    printf("\nStudent Name: %s", name);
    printf("Math Score: %.2f\n", math);
    printf("Science Score: %.2f\n", science);
    printf("History Score: %.2f\n", history);
    printf("Weighted Average: %.2f\n", average);
    printf("Final Grade: %c\n", grade);

    return 0;
}

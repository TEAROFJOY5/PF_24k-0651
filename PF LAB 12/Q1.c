/* Q1: You are tasked with creating a C program to manage student grades dynamically. The
program should allow users to input the number of students and, for each student, specify the
number of grades and enter those grades. Once the data is entered, the program should display
the grades for each student.
1. Implement dynamic memory allocation to handle a flexible number of students and
varying numbers of grades per student.
2. Prompt users to input the total number of students.
3. For each student, prompt users to input the number of grades and the actual grades.
4. Display the entered grades for each student.
5. Ensure proper memory management by freeing allocated memory after use.
  */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int noOfStds;

    // 1. Ask number of students
    printf("Enter the number of students: ");
    scanf("%d", &noOfStds);

    // 2. Allocate memory for grades array (2D) and number of grades per student
    int **grades = (int **)malloc(noOfStds * sizeof(int *));
    int *num_grades = (int *)malloc(noOfStds * sizeof(int)); // To keep track of how many grades per student

    // 3. Input grades for each student
    for (int i = 0; i < noOfStds; i++) {
        printf("\nEnter number of grades for student %d: ", i + 1);
        scanf("%d", &num_grades[i]);

        grades[i] = (int *)calloc(num_grades[i], sizeof(int));

        printf("Enter %d grades for student %d:\n", num_grades[i], i + 1);
        for (int j = 0; j < num_grades[i]; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    // 4. Display grades for each student
    printf("\nEntered Grades:\n");
    for (int i = 0; i < noOfStds; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < num_grades[i]; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    // 5. Free allocated memory
    for (int i = 0; i < noOfStds; i++) {
        free(grades[i]);
    }
    free(grades);
    free(num_grades);

    return 0;
}

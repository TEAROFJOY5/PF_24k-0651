#include <stdio.h>
#include <ctype.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

void convertToUppercase(char name[]) {
    int i = 0;
    while (name[i] != '\0') {
        name[i] = toupper(name[i]);
        i++;
    }
}

int main() {
    int numStudents;
    char students[MAX_STUDENTS][MAX_NAME_LENGTH];

    printf("Enter number of students (max 10): ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Maximum number of students is 10.\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", students[i]);
    }

    printf("\nFormatted Names:\n");
    for (int i = 0; i < numStudents; i++) {
        convertToUppercase(students[i]);
        printf("%s\n", students[i]);
    }

    return 0;
}

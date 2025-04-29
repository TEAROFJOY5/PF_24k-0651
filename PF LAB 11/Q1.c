#include <stdio.h>
#include <string.h>

struct Manager {
    char name[50];
};

struct Employee {
    int empID;
    char name[50];
    char department[30];
    float salary;
    struct Manager manager;
};


void inputEmployees(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empID);
        getchar(); // Consume newline

        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0'; 
        printf("Department: ");
        fgets(emp[i].department, sizeof(emp[i].department), stdin);
        emp[i].department[strcspn(emp[i].department, "\n")] = '\0';

        printf("Manager's Name: ");
        fgets(emp[i].manager.name, sizeof(emp[i].manager.name), stdin);
        emp[i].manager.name[strcspn(emp[i].manager.name, "\n")] = '\0';

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        getchar(); // Consume newline
    }
}

void displayEmployees(struct Employee emp[], int n) {
    printf("\n--- All Employee Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].empID);
        printf("Name: %s\n", emp[i].name);
        printf("Department: %s\n", emp[i].department);
        printf("Manager: %s\n", emp[i].manager.name);
        printf("Salary: %.2f\n", emp[i].salary);
    }
}


void highestSalary(struct Employee emp[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\n--- Employee with Highest Salary ---\n");
    printf("ID: %d\n", emp[maxIndex].empID);
    printf("Name: %s\n", emp[maxIndex].name);
    printf("Department: %s\n", emp[maxIndex].department);
    printf("Manager: %s\n", emp[maxIndex].manager.name);
    printf("Salary: %.2f\n", emp[maxIndex].salary);
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); // Consume newline

    struct Employee employees[n];

    inputEmployees(employees, n);
    displayEmployees(employees, n);
    highestSalary(employees, n);

    return 0;
}

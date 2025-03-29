#include <stdio.h>

float calculate(float num1, float num2, char op) {
    if (op == '+') {
        return num1 + num2;
    } else if (op == '-') {
        return num1 - num2;
    } else if (op == '*') {
        return num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }
    } else {
        printf("Invalid operation\n");
        return 0;
    }
}

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    result = calculate(num1, num2, op);

    printf("Result: %.2f\n", result);

    return 0;
}

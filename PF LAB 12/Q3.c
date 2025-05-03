/*
 Write a C program to create and manage a dynamic array of floating-point numbers using
pointers and dynamic memory allocation. The program should perform the following operations:
1. Dynamically allocate memory for an array of floats with an initial capacity of 4 elements.
2. Allow the user to enter floating-point numbers into the array. If the array becomes full, double
its capacity using realloc to accommodate more elements.
3. Provide the following functionality:
o a. Add a new number to the array.
o b. Display all numbers in the array.
o c. Remove the last number from the array (if not empty).
o d. Reduce the memory size to fit the current number of elements if the array&#39;s usage
drops significantly.
o e. Free the allocated memory before the program terminates.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 4;
    int size = 0;
    int choice;
    float number;
    int running = 1;  
   float *arr = (float *)malloc(capacity * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    while (running) {
        printf("\n--- Dynamic Float Array Menu ---\n");
        printf("1. Add a new number\n");
        printf("2. Display all numbers\n");
        printf("3. Remove last number\n");
        printf("4. Reduce memory usage\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a float number: ");
                scanf("%f", &number);
                if (size == capacity) {
                    capacity *= 2;
                    float *temp = realloc(arr, capacity * sizeof(float));
                    if (temp == NULL) {
                        printf("Memory reallocation failed.\n");
                        free(arr);
                        return 1;
                    }
                    arr = temp;
                    printf("Array capacity doubled to %d.\n", capacity);
                }

                arr[size++] = number;
                printf("Number added successfully.\n");
                break;

            case 2:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%.2f ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is already empty.\n");
                } else {
                    size--;
                    printf("Last number removed.\n");
                }
                break;

            case 4:
                if (size <= capacity / 2 && capacity > 4) {
                    int new_capacity = size > 4 ? size : 4;
                    float *temp = realloc(arr, new_capacity * sizeof(float));
                    if (temp == NULL) {
                        printf("Memory reduction failed.\n");
                    } else {
                        arr = temp;
                        capacity = new_capacity;
                        printf("Memory reduced to fit %d elements.\n", capacity);
                    }
                } else {
                    printf("Memory usage is already optimal.\n");
                }
                break;
            case 5:
                free(arr);
                printf("Memory freed. Program terminated.\n");
                running = 0;  // End the loop
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

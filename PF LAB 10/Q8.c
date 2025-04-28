#include <stdio.h>


int recursiveLinearSearch(int inputArray[], int arraySize, int targetValue, int currentIdx) {
    if (currentIdx == arraySize) {
        return -1; 
    }
    if (inputArray[currentIdx] == targetValue) {
        return currentIdx; 
      
    }
    return recursiveLinearSearch(inputArray, arraySize, targetValue, currentIdx + 1);
}

int main() {
    int totalElements, targetElement, iterator;

  
    printf("Enter the size of the array: ");
    scanf("%d", &totalElements);

    int numberArray[totalElements];

  
    printf("Enter %d elements of the array:\n", totalElements);
    for (iterator = 0; iterator < totalElements; iterator++) {
        printf("Element %d: ", iterator + 1);
        scanf("%d", &numberArray[iterator]);
    }

  
    printf("Enter the number to search for: ");
    scanf("%d", &targetElement);

  
    int searchResult = recursiveLinearSearch(numberArray, totalElements, targetElement, 0);

  
    if (searchResult == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", searchResult);
    }

    return 0;
}

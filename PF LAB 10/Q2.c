/* Write a recursive function bubbleSort that takes an array and its size. It performs the
 * bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
 * they are in the wrong order.
 */
#include <stdio.h>
void bubbleSortRecursive(int arr[], int size) {
    if (size == 1) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    bubbleSortRecursive(arr, size - 1);
}

int main() {
   int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSortRecursive(arr, size);

    printf("Sorted array:\n");
   for(int i=0; i<size; i++)
    {
            printf("%d ",arr[i]);
    }
    return 0;
}

// Write a recursive function that takes an array and its size as input and prints all the
// elements.
#include<stdio.h>
int arrayElement(int arr[], int size)
{
    if(size==0)
      return 0;
    
    arrayElement(arr, size - 1 );
    printf("%d ", arr[size-1]);
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    arrayElement(arr, size);
}

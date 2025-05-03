/*
 Your function is given an array containing some numbers. Decrease the value of all odd
numbers in the array by 1, so that the entire array contains only even numbers. Input array using
malloc.
*/
#include<stdio.h>
#include<stdlib.h>
void evenfun(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        if ( arr[i] % 2 != 0)
        {
            arr[i]--;
        }
    }
}



int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    if(n<2)
    {
     printf("This could not be the correct array size");
      return 1;
    }
    int *arr= (int *)malloc(n * sizeof(int));
    printf("\nEnter the elements of the array: ");
    for(int i=0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    evenfun(arr,n);
    printf("\n");
    for ( int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

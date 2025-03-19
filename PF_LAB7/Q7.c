/* Write a C Program that takes a user input array and prints the sum of its   elements.
 */
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    if(n<2){
        printf("\nInvalid size of array");
        return 1;
    }
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("\nThe sum of the array [");
    for(int i=0;i<n-1;i++)
    {
        printf("%d, ",arr[i]);
      if(i==n-2)
      printf("%d ] = %d",arr[i+1],sum);
        
    }
    
}

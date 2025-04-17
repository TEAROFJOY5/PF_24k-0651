/*Write a program using a function that finds the largest number and the least number in an array of 10
integers. Create separate functions for each functionality. Call them in main () as per user’s choice.
    */
#include<stdio.h>
int greatest(int arr[10])
{
    int greatest=arr[0];
    for(int i=0; i<10;i++)
    {
        if(arr[i]>greatest)
        greatest= arr[i];
    }
    return greatest;
}
int least(int arr[10])
{
    int least=arr[0];
    for(int i=0; i<10;i++)
    {
        if(arr[i]<least)
        least= arr[i];
    }
    return least;
}
int main()
{
    int arr[10];
    int c=0;
    printf("Enter the elements of the array: ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nIf you want to find the greatest number in the array press 1.\nIf you want to find the least number in the array press 2:");
    scanf(" %d",&c);
 
    switch (c)
    {
        case 1:
        {
        int a= greatest(arr);
        printf("\nThe greatest number is %d",a);
        break;
        }case 2:
        {
        int b= least(arr);
        printf("\nThe greatest number is %d",b);
        break;
        }
        default:
        printf("\nInvalid Choice");
    }
    
}

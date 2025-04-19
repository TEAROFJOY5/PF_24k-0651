/* Write a program that takes two integers, a and b, from the user. Create a function int
 * sumEvenNumbers(int start, int end) that sums up all the even numbers between start and end
 * (inclusive). The main() function should call this function and print the sum of even numbers in that range.
 * If the sum is greater than 100, display a special message "The sum exceeds 100."
 */
#include<stdio.h>
int sumEvenNumbers(int start, int end)
{
    int sum=0;
    for(int i=start; i<= end; i++)
    if(i%2==0)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int start, end;
    printf("Enter the starting range: ");
    scanf("%d",&start);
    printf("\nEnter the end range: ");
    scanf("%d",&end);
    int sum= sumEvenNumbers(start,end);
    if( sum > 100)
    {
        printf("\nThe sum exceeds 100");
    }
    printf("\nThe sum between %d and %d is %d",start,end,sum);
}

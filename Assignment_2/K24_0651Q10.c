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

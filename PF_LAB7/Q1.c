// A program to find if a given number is perfect or not
#include<stdio.h>
int main()
{
    int n, sum=06;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
  if(sum==n)
  {
      printf("\n%d is a perfect number.",n);
  }
  else
  printf("\n%d is not a perfect number.",n);
    
}

/* Write a C program to generate the Fibonacci series up to N terms using only one loop.
 */

#include <stdio.h>

int main()
{
   int a=0,b=1,term;
   printf("\nEnter the total number of term for the Fibonacci sequence: ");
   scanf("%d",&term);
   printf("\n%d ",b);
   for(int i=0;i<term-2;i++)
   {
       a=a+b;
       printf("%d ",a);
       b=a+b;
       printf("%d ",b);
   }
}

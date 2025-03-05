/* Write a program that continuously asks the user for numbers and calculates their average. The loop
 * should terminate when the user enters a negative number.
 */

#include <stdio.h>

int main()
{
    int a,b,avg;
   printf("\nEnter a and b: ");
   scanf("%d%d",&a,&b);
    if(a>=0 && b>=0)
      {
       while(1)
       { 
      
        printf("\nEnter a and b: ");
        scanf("%d%d",&a,&b);
        avg=(a+b)/2;
        printf("\nThe average of %d and %d is %d",a,b,avg);
       }
      
      }
    else
    printf("\nThe average cannot be calculated");
    
}

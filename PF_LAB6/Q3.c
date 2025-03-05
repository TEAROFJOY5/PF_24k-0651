/* Write a program in C to display the multiplication table for a given integer.
 */

#include<stdio.h>
int main()
{
  int num;
  printf("\nEnter the number whose table you want to print: ");
  scanf("%d",&num);
  for(int i=1;i<=12;i++)
  {
      printf("\n%d * %d = %d",num,i,num*i);
  }
}

/* Write a program to check whether a number is an Armstrong number or not. An Armstrong number
 * is a number that is equal to the sum of cubes of its digits.
 */

#include <stdio.h>

int main()
{
  int num,newNum;
   printf("\nEnter a 3 digit number: ");
   scanf("%d",&num);
   newNum=((num%10)*(num%10)*(num%10))+(((num/10)%10)*((num/10)%10)*((num/10)%10))+(((num/100)%10)*((num/100)%10)*((num/100)%10));
   if(num==newNum){
      printf("\nThe number is Armstrong");
  }
  else
  printf("\nThe number is not an Armstrong");
}

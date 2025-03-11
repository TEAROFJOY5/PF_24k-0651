/* Write a program in C to find the number and sum of all integers between 100 and 200 which are
 * divisible by 9.
 */
 #include<stdio.h>
 int main()
 {
     int sum=0,n=100,i,count=0;
     for(i=n;i<=200;i++)
     {
         if(i%9==0)
         {
             sum+=i;
             count++;
         }
     }
     printf("\nThe total number of digits divisible by 9 between 100 and 200 is %d",count);
     printf("\nThe sum is %d",sum);
 }

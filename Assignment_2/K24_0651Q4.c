/* Write a function bool isPrime(int num) that checks whether a number is prime or not. Call the function
from main() and display whether a number entered by the user is prime.
        */
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isPrime(int num)
{
        if (num <= 1) return false;
        for(int i=2 ; i*i<=num; i++){
        if(num%i==0)
        {
            return false ;
        }
        }
         return true ;
    
}
int main()
{  
   int a;
   char str[6];
   printf("Enter a number: ");
   scanf("%d",&a);
   bool c = isPrime(a);
   sprintf(str, "%s", c ? "true" : "false");
   if( strcmp( str , "true")==0)
   {
       printf("\n%d is a prime number.",a);
   }
   else
   {
       printf("\n%d is not a prime number.",a);
   }
}

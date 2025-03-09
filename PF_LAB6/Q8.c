// A program that will calculate the GCD and LCM values of 2 given numbers.

#include<stdio.h>
int main ()
{
    int a , b , gcd, lcm, result, i;
     result = 1;
     printf("Enter the number 1 and number 2: ");
     scanf("%d%d",&a,&b);
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    gcd = result;
    printf("\nThe gcd is equal to %d",gcd);
    lcm=(a*b)/gcd;
    printf("\nThe LCM is equal to %d",lcm);
}

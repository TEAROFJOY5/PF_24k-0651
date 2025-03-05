/*program calculates the factorial of a given number using only one loop.
 */
 
 #include<stdio.h>
 int main()
 {
    int fact,num,n;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    n=num;
    for(int i=n-1;i>=1;i--)
    {
        n=n*i;
    }
    fact=n;
    printf("\nThe factorial of %d is %d",num,fact);
     
 }
 

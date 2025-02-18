/* Create a calculator asking for operator (+ or – or * or /) and operands and
 * performs calculation according to the user input using switch statement.
 */
 
 #include<stdio.h>
 int main()
 {
     float a,b;
     float resultant=0.0;
     char op;
     printf("Enter the first number: ");
     scanf("%f",&a);
     printf("\nEnter the second number: ");
     scanf("%f",&b);
     printf("\nEnter the operator: ");
     scanf(" %c",&op);
     getchar();
     switch(op)
     {
         case '+':
         resultant= a+b;
         break;
         case '-':
         resultant= a-b;
         break;
         case '*':
         resultant= a*b;
         break;
         case '/':
         if(b==0)
         {
             printf("\nThe number cannot be zero.");
             return 1;
         }
         resultant= a/b;
         break;
         default:
         printf("\nYou have enter a wrong operator.");
     }
    printf("\n %f %c %f = %f",a,op,b,resultant);  
     
 }

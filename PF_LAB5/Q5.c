/* If a student&#39;s attendance is less than 75%, they are not allowed to take the exam. If not,
 * check if their assignment scores meet the passing criteria.
 */
 
 #include<stdio.h>
 int main()
 {
     int attendance, marks;
     printf("\nEnter your attendance percentage:");
     scanf("%d",&attendance);
     if(attendance<75)
     {
         printf("\nYou are not allowed to sit in exam.");
         
     }
     else
     {
         printf("\nEnter your marks: ");
         scanf("%d",&marks);
         if(marks>=50)
         {
             printf("\nYou are pass");
         }
         else
         {
             printf("\nYou are failed! You don't met the criteria to pass the exam.");
         }
     }
 }

#include<stdio.h>
#define NUMBER 5
#define NAME 20
int main()
{   int length[NUMBER]={0}, Length=0;
    char name[NUMBER][NAME];
    printf("Enter the name of 5 students: ");
    for(int i=0; i<NUMBER; i++)
    {
        scanf("%s",name[i]);
    }
   for( int i=0; i<NUMBER; i++)
   {
       for(int j=0; name[i][j]!='\0'; j++)
       {
           Length++;
       }
       length[i]=Length;
       Length=0;
   }
   printf("\n%13s%13s","Name","Length");
   for(int i=0; i<NUMBER; i++)
   printf("\n%13s%13d",name[i],length[i]);
   
}

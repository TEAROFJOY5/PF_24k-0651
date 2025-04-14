#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countFrequency(char str[],char ch)
{
    int count=0;
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {   
        if( tolower(str[i]) == tolower(ch))
            count++;
        
    }
    return count;
}
 int main()
 {
     int size=0;
     char temp[100], ch;
     printf("\nEnter the string: ");
     fgets(temp,100,stdin);
     temp[strcspn(temp,"\n")]='\0';
     size=strlen(temp);
     char str[size + 1];
     strcpy(str,temp);
     printf("\nWhat character you want to find count of: ");
     scanf("%c",&ch);
     getchar();
    int count = countFrequency(str,ch);
 
    printf("\nThe count of %c is %d",ch,count); 
 }

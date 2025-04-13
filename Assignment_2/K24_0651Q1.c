#include<stdio.h>
int main()
{   int length=0;
    char str[100], revs[100];
    printf("\nEnter the string: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    for(int i=0; i<length; i++)
    {
        revs[i]=str[length-i-1];
    }
    revs[length]='\0';
    printf("\n%13s%13s\n","String","Reverse");
    printf("%13s%13s",str,revs);
}

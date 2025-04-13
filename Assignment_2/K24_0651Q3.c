#include<stdio.h>
int main()
{
    int value=0;
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("\nEnter the Second string: ");
    scanf("%s",str2);
    for(int i=0;str1[i]!='\0' && str2[i] != '\0'; i++)
    {
        if(str1[i]!= str2[i])
        {
            value=str1[i]-str2[i];
            break;
        }
    }
    if(value==0)
    printf("\n %s is equal to %s", str1, str2 );
    else if( value>0)
    printf("\n %s is greater than %s",str1,str2);
    else if( value<0)
    printf("\n %s is smaller than %s",str1,str2);
}

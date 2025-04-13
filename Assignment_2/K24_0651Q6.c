#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countVowels(char str[100])
{
    int count = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if( str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i] =='O' || str[i] == 'u' || str[i] == 'U' )
        {
            count++;
        }
    }
    return count;
    
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    int size = sizeof(str)/sizeof(str[0]);
    fgets(str,size,stdin);
    str[strcspn(str,"\n")]='\0';
    int num=countVowels(str);
    printf("\nThe number of the vowels in the string is %d",num);
}

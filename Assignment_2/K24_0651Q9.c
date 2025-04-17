#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countVowels(char str[])
{    int length=strlen(str);
     int count = 0;
    for (int i = 0; i<length ; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main()
{
    char temp[100];
    printf("\nEnter the string: ");
    fgets(temp,100,stdin);
    int length=strlen(temp);
  //  printf("%d is the length of inputed string",length);
    char str[length];
    strcpy(str,temp);
    int count;
    count=countVowels(str);
    printf("\nThere are %d vowels in your given string.",count);
    
}

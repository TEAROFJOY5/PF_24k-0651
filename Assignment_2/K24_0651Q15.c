#include <stdio.h>
#include <string.h>
void reverseString(char str[], char reversed[])
{
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
}
int countVowels(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}
int countConsonants(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if((ch >= 'a' && ch <= 'z') &&
           !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[100], reversed[100];
    printf("Enter a string: ");
    scanf("%s", str); // string will be read but without spaces
    reverseString(str, reversed);
    if(strcmp(str, reversed) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    int vowels = countVowels(str);
    int consonants = countConsonants(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

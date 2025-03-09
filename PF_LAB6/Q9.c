#include<stdio.h>
int main ()
{
    char str[100];
    printf("Enter the word: ");
    scanf("%s",str);
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
   int isPalindrome = 1;  // Assume it is a palindrome

    for(int j = 0; j < length / 2; j++) {
        if(str[j] != str[length - j - 1]) {
            isPalindrome = 0;  // It's not a palindrome
            break;
        }
    }
        if(isPalindrome)
        printf("\nIs a palindrome");
        else
        printf("\nNot a palindrome");

    return 0;
}

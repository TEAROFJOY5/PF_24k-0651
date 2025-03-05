/* Write a program that uses bitwise operators to toggle (invert) the case of a given
 * character (convert lowercase to uppercase and vice versa).
 */

#include <stdio.h>

int main()
{
    char c;
    printf("\nEnter a character: ");
    scanf("%c",&c);
    printf("\nYou have entered the character %c",c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
        c=c^32;
        printf("\nnew character is %c",c);
    }
}

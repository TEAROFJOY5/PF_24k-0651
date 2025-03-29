#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // It is not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It is  a palindrome
}

int main() {
    int rows = 5;
    int cols = 20;
    
    
    char words[rows][cols];

    
    printf("Enter 5 words (max length 20 characters each):\n");
    for (int i = 0; i < rows; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
    }


    for (int i = 0; i < rows; i++) {
        if (palindrome(words[i])) {
            printf("Word \"%s\" is a Palindrome\n", words[i]);
        } else {
            printf("Word \"%s\" is Not a Palindrome\n", words[i]);
        }
    }

    return 0;
}

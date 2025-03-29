#include <stdio.h>
#include <string.h>

int countWords(char sentence[]) {
    int count = 0;
    int i = 0;
    
    while (sentence[i] != '\0') {
        // Skip leading spaces
        while (sentence[i] == ' ') {
            i++;
        }

        // If it's not the end of the sentence, it means we've found a word
        if (sentence[i] != '\0') {
            count++;
        }

        // Skip the characters of the current word
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            i++;
        }
    }

    return count;
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    int wordCount = countWords(sentence);

    printf("Number of words: %d\n", wordCount);

    return 0;
}

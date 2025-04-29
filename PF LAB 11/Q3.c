#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], destFile[100];


    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    
    FILE *src = fopen(sourceFile, "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file for writing
    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);
    return 0;
}

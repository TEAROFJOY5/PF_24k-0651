#include <stdio.h>

int main() {
    FILE *fp1 = fopen("file1.txt", "r");
    FILE *fp2 = fopen("file2.txt", "r");
    FILE *fp3 = fopen("merged.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        perror("Error opening one of the files");
        return 1;
    }

    char ch;

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully into merged.txt\n");
    return 0;
}

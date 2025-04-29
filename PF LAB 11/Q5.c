#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1 = fopen("first.txt", "r");
    if (fp1 == NULL) {
        perror("Error opening first.txt");
        return 1;
    }

 
    fseek(fp1, 0, SEEK_END);
    long size = ftell(fp1);
    rewind(fp1); // Go back to start of file

    char *buffer = (char *)malloc(size);
    if (buffer == NULL) {
        perror("Memory error");
        fclose(fp1);
        return 1;
    }

    fread(buffer, 1, size, fp1); 
    fclose(fp1);


    FILE *fp2 = fopen("second.txt", "w");
    if (fp2 == NULL) {
        perror("Error opening second.txt");
        free(buffer);
        return 1;
    }

    for (long i = size - 1; i >= 0; i--) {
        fputc(buffer[i], fp2);
    }

    fclose(fp2);
    free(buffer);

    printf("File reversed and copied to second.txt\n");
    return 0;
}

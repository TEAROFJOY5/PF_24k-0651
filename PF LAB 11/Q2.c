#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    int choice;
    char ch;
    char content[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);

    do {
        printf("\n--- Menu ---\n");
        printf("1. Write new content (overwrite)\n");
        printf("2. Append content\n");
        printf("3. Read and display content\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        getchar(); 

        FILE *fp;

        switch (choice) {
            case 1: // Write
                fp = fopen(filename, "w");
                if (fp == NULL) {
                    perror("Error opening file");
                    break;
                }
                printf("Enter content to write (end with a single line with only ~):\n");
                while (fgets(content, sizeof(content), stdin)) {
                    if (content[0] == '~' && content[1] == '\n')
                        break;
                    fputs(content, fp);
                }
                fclose(fp);
                printf("Content written successfully.\n");
                break;

            case 2: 
                fp = fopen(filename, "a");
                if (fp == NULL) {
                    perror("Error opening file");
                    break;
                }
                printf("Enter content to append (end with a single line with only ~):\n");
                while (fgets(content, sizeof(content), stdin)) {
                    if (content[0] == '~' && content[1] == '\n')
                        break;
                    fputs(content, fp);
                }
                fclose(fp);
                printf("Content appended successfully.\n");
                break;

            case 3: 
                fp = fopen(filename, "r");
                if (fp == NULL) {
                    perror("Error opening file");
                    break;
                }
                printf("\n--- File Content ---\n");
                while ((ch = fgetc(fp)) != EOF) {
                    putchar(ch);
                }
                fclose(fp);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}

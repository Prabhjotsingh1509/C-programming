// WAP to read, write and display the content of the file.
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter text to write to file:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);   
    fclose(fp);
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nContent of the file:\n");

    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}

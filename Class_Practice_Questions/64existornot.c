// WAP to check whether the files exist or not?
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");   

    if (fp == NULL) {
        printf("File does NOT exist.\n");
    } else {
        printf("File exists.\n");
        fclose(fp);
    }

    return 0;
}

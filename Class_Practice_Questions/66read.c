// WAP to read a string into a text file.
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);   

    printf("String written successfully!\n");

    fclose(fp);
    return 0;
}

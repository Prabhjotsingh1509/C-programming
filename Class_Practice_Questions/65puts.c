// WAP to read a string into a text file using fputs() function 
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);

    printf("String written to output.txt successfully!\n");

    fclose(fp);

    return 0;
}

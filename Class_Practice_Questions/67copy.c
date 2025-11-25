// WAP to copy from one file to another file.
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Error: source file cannot be opened!\n");
        return 1;
    }

    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Error: destination file cannot be created!\n");
        fclose(src);
        return 1;
    }
    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from source.txt to destination.txt\n");

    fclose(src);
    fclose(dest);

    return 0;
}

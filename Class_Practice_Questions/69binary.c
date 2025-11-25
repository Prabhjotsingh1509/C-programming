#include <stdio.h>

int main() {
    FILE *src, *dest;
    char buffer[1024];
    size_t bytesRead;

    src = fopen("source.bin", "rb");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    dest = fopen("copy.bin", "wb");
    if (dest == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        return 1;
    }

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytesRead, dest);
    }

    printf("Binary file copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}

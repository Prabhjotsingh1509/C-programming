#include <stdio.h>

int main() {
    unsigned int decimal;
    
    printf("Enter a hexadecimal number: ");
    scanf("%x", &decimal);
    
    printf("Decimal: %u\n", decimal);
    printf("Octal: %o\n", decimal);

    // Binary conversion
    printf("Binary: ");
    if (decimal == 0) {
        printf("0");
    } else {
        int bin[32], i = 0;
        while (decimal > 0) {
            bin[i++] = decimal % 2;
            decimal /= 2;
        }
        for (int j = i - 1; j >= 0; j--)
            printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}

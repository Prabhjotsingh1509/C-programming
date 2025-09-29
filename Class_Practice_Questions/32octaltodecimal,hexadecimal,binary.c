#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char octal[32];
    int decimal = 0;

    // Input octal number as string
    printf("Enter an octal number: ");
    scanf("%s", octal);

    // Convert octal string to decimal
    int len = strlen(octal);
    for (int i = 0; i < len; i++) {
        if (octal[i] < '0' || octal[i] > '7') {
            printf("Invalid octal number!\n");
            return 1;
        }
        decimal = decimal * 8 + (octal[i] - '0');
    }

    // Print Decimal
    printf("Decimal: %d\n", decimal);

    // Print Binary
    printf("Binary: ");
    if (decimal == 0) {
        printf("0");
    } else {
        int bin[64], i = 0;
        int temp = decimal;
        while (temp > 0) {
            bin[i++] = temp % 2;
            temp /= 2;
        }
        for (int j = i - 1; j >= 0; j--)
            printf("%d", bin[j]);
    }
    printf("\n");

    // Print Hexadecimal
    printf("Hexadecimal: %X\n", decimal);

    return 0;
}

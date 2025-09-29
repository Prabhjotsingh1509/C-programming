#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[65];
    int decimal = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Convert binary string to decimal
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 1;
        }
        decimal = decimal * 2 + (binary[i] - '0');
    }

    // Output
    printf("Decimal: %d\n", decimal);
    printf("Octal: %o\n", decimal);
    printf("Hexadecimal: %X\n", decimal);

    return 0;
}

#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // case for 0
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Print binary number in reverse
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}

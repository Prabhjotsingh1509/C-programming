#include <stdio.h>

int main() {
    int decimal, i = 0;
    char hex[32];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Hexadecimal equivalent: 0\n");
        return 0;
    }

    while (decimal > 0) {
        int remainder = decimal % 16;

        if (remainder < 10)
            hex[i] = remainder + '0';      // '0'–'9'
        else
            hex[i] = remainder - 10 + 'A'; // 'A'–'F'

        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    printf("\n");

    return 0;
}

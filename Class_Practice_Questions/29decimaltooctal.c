#include <stdio.h>

int main()
{
    int decimal, octal[32], i = 0;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Octal equivalent: 0\n");
        return 0;
    }

    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }

    printf("\n");

    return 0;
}

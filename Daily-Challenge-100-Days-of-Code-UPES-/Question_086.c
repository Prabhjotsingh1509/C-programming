// Q86: Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[50], str1[50];
    int i = 0, j = 0;
    printf("Enter the string");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        str1[i] = str[i];
        i++;
    }
    i--;
    while (i >= 0)
    {
        str[j] = str1[i];
        i--;
        j++;
    }
    i = 0;
    j = 0;
    while (str[j] != '\0')
    {
        if (str[j] != str1[i])
        {
            printf("Not palindrome");
            return 0;
        }
        i++;
        j++;
    }

    printf("palindrome");
    return 0;
}
/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
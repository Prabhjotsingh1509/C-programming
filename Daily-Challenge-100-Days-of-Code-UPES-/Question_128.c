// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>

int main()
{
    int v = 0, c = 0;
    char ch;
    FILE *fp;

    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf("Error in the opening");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Number of vowels:%d\nNumber of consonents:%d", v, c);
    fclose(fp);
    return 0;
}
/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
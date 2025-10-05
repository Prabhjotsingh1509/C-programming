// Q91: Remove all vowels from a string.
#include<stdio.h>

int main()
{
    char str[50];
    int i=0;
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i] !='\0')
    {
        if(str[i]!='a'&&str[i]!='A'&&str[i]!='e'&& str[i]!='E'&& str[i]!='i'&& str[i]!='I'&& str[i]!='o'&& str[i]!='O'&& str[i]!='u'&& str[i]!='U')
        {
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
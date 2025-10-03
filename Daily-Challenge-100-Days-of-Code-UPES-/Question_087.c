// Q87: Count spaces, digits, and special characters in a string.
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i=0;
    int space=0,digits=0,special=0;
    char str[50];
    printf("enter the string:");
    fgets(str,50,stdin);
    while(str[i] !='\0')
    {
        if(str[i]== ' ')
        {
            space++;
        }
        else if (isdigit(str[i])) 
        {
            digits++;
        }
        else if (!isalnum(str[i]) && !isspace(str[i]))
        {
            special++;
        }
        i++;
    }
    printf("Spaces =%d, Digits=%d, Special=%d",space,digits,special);
    return 0;
}
/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/
// Q92: Find the first repeating lowercase alphabet in a string.
#include<stdio.h>

int main()
{
    int i=0,len=0,c;
    char str[50];
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    i=0;
    while(str[i] != '\0')
    {
        c=i+1;
        while(c<len && str[i]>=97 && str[i]<=122)
        {
            if(str[i]==str[c])
            {
                printf("%c",str[i]);
                return 0;
            }
            c++;
        }
        i++;
    }
    printf("No repeating lowercase character found.\n");
    return 0;
}
/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
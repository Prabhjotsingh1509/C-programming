// Q100: Print all sub-strings of a string.
#include<stdio.h>
#include<string.h>

int main()
{
    int i,len=0,j,k;
    char string[50];

    printf("Enter the String:");
    fgets(string,50,stdin);

    len=strlen(string);

    if (string[len - 1] == '\n') 
    {
        string[len - 1] = '\0';
        len--;
    }
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            for(k=i;k<=j;k++)
            {
                printf("%c",string[k]);
            }
            printf(",");
        }
        
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
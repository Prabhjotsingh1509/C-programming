// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include<string.h>

int main()
{
    int i, j,k, c = 0, max = 0;
    int flag;
    char s[50], str[50];

    printf("Enter the string:");
    fgets(s, 50, stdin);
    strcpy(str,s);

        for (i = 0; s[i] != '\0'; i++)
    {
        c=0;
        flag=0;
        for (j = i; str[j] != '\0'; j++)
        {
            for(k=i;k<j;k++)
            {
                if(str[k]==str[j])
                {
                    flag=1;
                }
            }
            if(flag)
            break;
            c++;
        }
        if(c>max)
        {
            max=c;
        }
    }
    printf("%d", max);
}
/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
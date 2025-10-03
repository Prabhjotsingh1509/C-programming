// Q81: Count characters in a string without using built-in length functions.
#include<stdio.h>

int main()
{
    int i=0,len=0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("The length of string :%d",len);
}
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
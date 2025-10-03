// Q85: Reverse a string.
#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str[10],str1[10];
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i] !='\0')
    {
        str1[i]=str[i];
        i++;
    }
    i--;
    while(i>=0)
    {
        str[j]=str1[i];
        i--;
        j++;
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}
/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
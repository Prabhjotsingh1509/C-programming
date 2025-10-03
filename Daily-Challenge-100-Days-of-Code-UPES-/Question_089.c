// Q89: Count frequency of a given character in a string.
#include<stdio.h>

int main()
{
    int i=0,freq=0;
    char str[50],target;
    printf("Enter the string:");
    scanf("%s",str);
    fflush(stdin);
    printf("Enter the target:");
    scanf("%c",&target);
    while(str[i] !='\0')
    {
        if(str[i]==target)
        {
            freq++;
        }
        i++;
    }
    printf("The frequency of %c:%d",target,freq);
    return 0;
}
/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
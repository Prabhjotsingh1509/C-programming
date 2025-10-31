// Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("Enter the string:");
    fgets(str,100,stdin);

    while(str[i] != '\0')
    {
        if(i==0)
        {
            if(str[i]>=97 && str[i]<=122)
            {
                printf("%c",str[i]-32);
            }
            else 
            {
                printf("%c",str[i]);
            }
        }
        else if(str[i-1] == ' ' )
        {
            if(str[i]>=97 && str[i]<=122)
            {
                printf("%c",str[i]-32);
            }
            else 
            {
                printf("%c",str[i]);
            }
        }
        else 
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
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
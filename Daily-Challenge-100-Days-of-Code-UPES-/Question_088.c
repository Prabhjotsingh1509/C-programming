// Q88: Replace spaces with hyphens in a string.
#include<stdio.h>

int main()
{
    int i=0;
    char str[50];
    printf("Enter the string:");
    fgets(str,50,stdin);

    while(str[i] !='\0')
    {
        if(str[i]==' ')
        {
            str[i]='-';
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
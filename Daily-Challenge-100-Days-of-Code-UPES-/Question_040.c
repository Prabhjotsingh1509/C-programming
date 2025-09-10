// Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include<string.h>

int main() 
{
    int i,place = 1, digit;
    char binary[100],onescomp[100];
    
    printf("Enter the binary=");
    scanf("%s",binary);

    for(i=0;binary[i] !='\0';i++)
    {
        if(binary[i]=='0')
        {
            onescomp[i]='1';
        }
        else if (binary[i]=='1')
        {
            onescomp[i]='0';
        }
        else 
        printf("invalid binary digit \n");
        return 0;
    }
    onescomp[i] = '\0';
    printf("%s", onescomp);
    return 0;
}
/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
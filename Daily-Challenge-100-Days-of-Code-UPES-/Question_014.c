//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else. //
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character=");
    scanf("%d",&ch);

    if(ch=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    {
        printf("It is vowels");
    }
    else
    {
        printf("It is consonent");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
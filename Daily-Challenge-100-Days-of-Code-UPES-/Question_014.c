//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else. //
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character=");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
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
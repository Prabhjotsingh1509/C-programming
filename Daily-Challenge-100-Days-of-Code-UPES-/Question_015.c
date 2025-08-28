//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.//
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character=");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    printf("It is lower case alphabet");
    else if(ch>='A' && ch<='Z')
    printf("It is upper case alphabet");
    else if(ch>='0' && ch<='9')
    printf("It is a digit");
    else
    printf("It is a special chahracter");
    return 0;

}
/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

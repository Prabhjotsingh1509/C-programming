//Q32 : Write a program to check if a number is a palindrome.//
#include<stdio.h>

int main()
{
    int n,t,r,d=0;
    printf("Enter the number to check whether it is palindrome or not=");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        d=d*10+r;
        n=n/10;
    }
    if(t==d)
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}
/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
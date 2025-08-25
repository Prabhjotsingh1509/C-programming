//Q11: Write a program to input an integer and check whether it is even or odd using if–else.//
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the integer=");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is even",n);
    else
    printf("%d is odd",n);
}
/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
// Q12 : Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.//
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the integer=");
    scanf("%d",&n);
    if(n>0)
    printf("Positive");
    else if (n==0)
    {
        printf("Zero");
    }
    else
    printf("Negative");
    getch();
    return 0;
}

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
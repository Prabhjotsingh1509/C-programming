//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
//It is divisible by 4, AND It is NOT divisible by 100, UNLESS it is also divisible by 400//
#include <stdio.h>

int main()
{
    int n;
    printf("enter the year number=");
    scanf("%d",&n);
    if((n%4==0) || ((n%100==0) && (n%400==0)))
    {
        printf("It is a leap year");
    }
    else
    printf("It is not a leap year");
    return 0;
}

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
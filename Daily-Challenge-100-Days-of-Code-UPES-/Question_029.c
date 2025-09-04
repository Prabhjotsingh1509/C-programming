//Q29: Write a program to calculate the factorial of a number.//
#include<stdio.h>

int main()
{
    int n,i=1,f=1;
    printf("Enter the program for which factorial you want=");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The factorial of %d is %d",n,f);
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
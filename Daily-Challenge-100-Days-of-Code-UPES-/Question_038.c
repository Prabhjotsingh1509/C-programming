// Q38: Write a program to find the sum of digits of a number.
#include<stdio.h>

int main()
{
    int n,r,d=0;
    printf("Enter the integer=");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        d+=r;
        n=n/10;
    }
    printf("The sum of digits=%d",d);   
    return 0;
}
/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
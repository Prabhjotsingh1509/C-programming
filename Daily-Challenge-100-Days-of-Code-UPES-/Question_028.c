//Q28: Write a program to print the product of even numbers from 1 to n.//
#include<stdio.h>

int main()
{
    int a=1,n,i=2;
    printf("Enter the number till which you want product=");
    scanf("%d",&n);
    while(i<=n)
    {
        a*=i;
        i=i+2;
    }
    printf("The product=%d",a);
    return 0;
}
/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
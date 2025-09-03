// Q27 : Write a program to print the sum of the first n odd numbers.//
#include<stdio.h>

int main()
{
    int n,i=0,a=1,s=0;
    printf("Enter the number till which you want to sum=");
    scanf("%d",&n);
    while(i<n)
    {
        s+=a;
        a=a+2;
        i++;
    }
    printf("The sum of first %d odd numbers=%d",n,s);
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
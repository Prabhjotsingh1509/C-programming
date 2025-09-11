// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>

int main()
{
    int n,i;
    double sum=0;
    printf("Enter the integer=");
    scanf("%d",&n);
    sum=1.0;
    for(i=2;i<=n;i++)
    {
        sum+=(double)(2*i-1)/(2*i);
    }
    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
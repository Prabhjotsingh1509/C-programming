// Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>

int main()
{
    int n,t,r,d=0;
    printf("Enter the number to check whether it is integer or not=");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        d+=(r*r*r);
        n=n/10;
    }
    if(d==t)
    printf("Armstrong number");
    else
    printf("not armstrong");
    return 0;
}
/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
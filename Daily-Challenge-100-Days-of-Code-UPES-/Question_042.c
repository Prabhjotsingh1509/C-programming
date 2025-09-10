// Q42: Write a program to check if a number is a perfect number.
#include<stdio.h>

int main()
{
    int n,i=1,s=0;
    printf("Enter the integer=");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        s+=i;
        i++;
    }
    if(s==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");   
    }
}
/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
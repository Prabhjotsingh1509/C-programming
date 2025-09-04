//Q30 : Write a program to reverse a given number.//
#include<stdio.h>
int main()
{
    int n,r,d=0;
    printf("Enter the number for reverse=");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        d=(d*10)+r;
        n=n/10;
    }
    printf(" The reverse of a given number=%d \n",d);
    return 0;
}

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
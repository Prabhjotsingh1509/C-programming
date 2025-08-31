//Q23: Write a program to calculate a library fine based on late days.//
#include<stdio.h>

int main()
{
    int n,f=0;
    printf("fine of one day late is 2 rupees\n");
    printf("Enter number of days=");
    scanf("%d",&n);
    if(n<=4)
    {
        f=n*2;
        printf("FINE rupees %d",f);
    }
    else if(n<=10)
    {
        f=n*4;
        printf("FINE rupees %d",f);
    }
    else if(n<=30)
    {
        f=n*6;
        printf("FINE rupees %d",f);
    }
    else
    {
        printf("Membership Cancelled");
    }
    
    return 0;
}

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
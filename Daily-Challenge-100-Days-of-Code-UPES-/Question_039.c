// Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>

int main()
{
    int n,p=1;
    printf("Enter the integer=");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2 != 0)
        {
            p = p*(n%10);
        }
        n = n/10;
    }
    printf("Product of odd digits=%d",p);
    printf("\n");
    return 0;
}
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
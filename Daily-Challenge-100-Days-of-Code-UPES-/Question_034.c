// Q34: Write a program to check if a number is prime.
#include<stdio.h>

int main()
{
    int n,i=1,c=0;
    printf("Enter the integer to check whether it is prime or not=");
    scanf("%d",&n);
    while(i<=n)
    {
        if (n%i==0)
            c++;
        i++;
    }
    if(c==2)
    printf("It is prime number");
    else 
    printf("Not prime number");

    return 0;
}
/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
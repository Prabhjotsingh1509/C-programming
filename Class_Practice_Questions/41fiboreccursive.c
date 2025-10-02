// Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.
#include <stdio.h>

int FIBO(int num);
int main()
{
    int n, i;
    printf("how many terms of fibonacci series you want:");
    scanf("%d", &n);
    printf("The fibonacci series:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",FIBO(i));
    }
}
int FIBO(int num)
{
    if(num ==0)
    return 0;
    if(num==1)
    return 1;
    else
    return FIBO(num - 1) + FIBO(num - 2);
}
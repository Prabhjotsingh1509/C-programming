//Q2 : Write a program to input two numbers and display their sum, difference, product, and quotient.//
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two Numbers=\n");
    scanf("%d %d\n",&a,&b);
    printf("The sum= %d\n",a+b);
    printf("The difference= %d\n",a-b);
    printf("The Product = %d\n",a*b);
    if(b!=0)
    printf("The Quotient = %d\n",a/b);
    else
    printf("Not defined");
    return 0;
}

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

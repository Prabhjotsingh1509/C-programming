//Q7 : Write a program to swap two numbers without using a third variable. //
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter two numbers=");
    scanf("%d %d",&a,&b);
    printf("before swap= %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap:%d %d",a,b);
    getch();
}
/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
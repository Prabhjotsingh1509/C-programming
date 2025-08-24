//Q6 : Write a program to swap two numbers using a third variable.//
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a nd after swap=%d %d",a,b);
    getch();
}
/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
// Q8 : Write a program to find and display the sum of the first n natural numbers. //
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,s=0,i=0;
    printf("Enter the natural number till you want the sum=");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i;
        i++;
    }
    printf("The sum= %d",s);
    getch();
}
/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
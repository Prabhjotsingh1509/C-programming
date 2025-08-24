// Q9 : Write a program to calculate simple and compound interest for given principal, rate, and time.//
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float s,p,r,t,c;
    printf("Enter the principal amount=");
    scanf("%f",&p);
    printf("Enter the rate of interest=");
    scanf("%f",&r);
    printf("enter the time=");
    scanf("%f",&t);
    s=(p*r*t)/100;
    c = p * (pow((1 + r/100.0), t) - 1);
    printf("simple interest= %f \n",s);
    printf("compound interest=%f",c);
    getch();
}
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
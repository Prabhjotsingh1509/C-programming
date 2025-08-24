//Q5 : Write a program to convert temperature from Celsius to Fahrenheit.//
#include<stdio.h>
#include<conio.h>

void main()
{
    float c,f;
    printf("Enter the tempertature in celsius=");
    scanf("%f",&c);
    f=(c*9/5)+32;

    printf("The temperature in farenheit=%f",f);
    getch();
}
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
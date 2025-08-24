// Q4 Write a program to calculate the area and circumference of a circle given its radius.//
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,p,r;
    printf("Enter the Radius=");
    scanf("%f",&r);
    printf("The Area of Circle=%f",3.14*r*r);
    printf("The Circumference of Circle= %f",3.14*2*r);
    getch();
}
/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/



// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.//
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,p,l,b;
    printf("Enter the length and breadth=");
    scanf("%d %d\n",&l,&b);
    printf("The area of a rectangle= %d\n",l*b);
    printf("The perimeter of rectangle= %d",2*(l+b));
    getch();
}


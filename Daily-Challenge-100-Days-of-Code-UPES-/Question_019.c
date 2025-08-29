//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.//
#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter the sides of a triangle=");
    scanf("%f %f %f",&a,&b,&c);
    if(a==b && b==c)
    printf("Equilateral");
    else if(a==b && b!=c || a==c && c!=b|| c==b && c!=a)
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
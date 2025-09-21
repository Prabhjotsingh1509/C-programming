// WAP to find the type and area of a triangle, use function type() and area() and call them in the main function.
#include<stdio.h>
#include<math.h>
void type(int a,int b,int c);
void area(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle :");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b >c && a+c>b && b+c>a)
    {
    type(a,b,c);
    area(a,b,c);
    }
    else
    printf("The side you enter is invalid");
    return 0;
}
void type(int a,int b,int c)
{
    if(a==b && b==c)
    printf("the triangle is equilateral triangle.\n");
    else if(a==b || a==c || b==c)
    printf("The triangle is isosceles triangle.\n");
    else 
    printf("The triangle is scalene.\n");
}
void area(int a,int b,int c)
{
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle :%.2f",area);
}
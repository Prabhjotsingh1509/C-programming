// WAP to multiply two number using a function multiply(). Print values for multiply(a,b), multiply(7,8), multiply (a+b,a-b) and multiply(6, sum(a,b)).
#include<stdio.h>

void multiply(int a,int b);
int sum(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("The multiplication of a and b:");
    multiply(a,b);
    printf("\n");
    printf("The multiplication of 7 and 8:");
    multiply(7,8);
    printf("\n");
    printf("The multiplication of sum of two numbers and difference of two numbers:");
    multiply(a+b,a-b);
    printf("\n");
    printf("The multiplication of 6 and sum of two numbers:");
    multiply(6,(sum (a,b)));
    return 0;
}
int sum(int x,int y)
{
    return x+y;
}
void multiply(int x, int y)
{
    printf("%d",x*y);
}
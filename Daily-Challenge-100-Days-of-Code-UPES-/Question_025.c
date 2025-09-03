//Q25 : Write a program to implement a basic calculator using switch-case for +, -, *, /, %.//
#include<stdio.h>

int main()
{
    char c;
    int a,b;
    printf("Enter the integer to operate =");
    scanf("%d %d",&a,&b); 
    fflush(stdin);
    printf("Enter the operaton number you want to implement=");
    scanf("%c",&c);
    switch(c)
    {
        case '+':
        printf("The sum =%d",a+b);
        break;
        case '-':
        printf("the difference=%d",a-b);
        break;
        case '*':
        printf("The product=%d",a*b);
        break;
        case '/':
        printf("The quotient=%d",a/b);
        break;
        case '%':
        printf("The modulus=%d",a%b);
        break;
        default:
        printf("The error");
        break;
    }

    return 0;
}
/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
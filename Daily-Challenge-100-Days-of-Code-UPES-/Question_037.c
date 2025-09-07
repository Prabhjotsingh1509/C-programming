// Q37: Write a program to find the LCM of two numbers.
#include<stdio.h>

int main()
{
    int a,b,i=1,hcf,LCM;
    printf("Enter the integer =");
    scanf("%d %d",&a,&b);
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
        i++;    
    }
    LCM=(a*b)/hcf;
    printf("%d",LCM);
    return 0;
}

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
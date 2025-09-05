//Q31: Write a program to take a number as input and print its equivalent binary representation.//
#include<stdio.h>

int main()
{
    int n,r;
    long binary=0,place=1;
    printf("Enter the integer=");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
        return 0;
    }

    while(n>0)
    {
        r = n % 2;             
        binary = r * place + binary;  
        n = n / 2; 
        place=place*10;  
    }
    printf("Binary= %d",binary);
    return 0;
}
/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
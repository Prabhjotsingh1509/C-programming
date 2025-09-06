// Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main()
{
    int a, b, i=1,HCF;
    printf("Enter the integer =");
    scanf("%d %d",&a,&b);
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        HCF=i;
        i++;    
    }
    printf("%d",HCF);

    return 0;
}
/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
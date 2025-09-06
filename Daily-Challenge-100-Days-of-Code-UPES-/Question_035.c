// Q35: Write a program to print all factors of a given number.
#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the integer to find the factors=");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            printf("%d\t",i);
        i++;
        
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
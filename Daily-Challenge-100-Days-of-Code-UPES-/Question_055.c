// Q55: Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>

int main()
{
    int n,i,j,c;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        printf("%d\t",i);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
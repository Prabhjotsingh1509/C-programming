// Q57: Find the sum of array elements.
#include<stdio.h>

int main()
{
    int a[10],i,n,sum=0;
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("Ente the %d values for sum=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("The sum =%d",sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
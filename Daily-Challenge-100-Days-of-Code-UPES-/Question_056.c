// Q56: Read and print elements of a one-dimensional array.
#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the number of array=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
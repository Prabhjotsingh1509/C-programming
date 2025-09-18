// Q58: Find the maximum and minimum element in an array.
#include <stdio.h>

int main()
{
    int n, a[10], i, min, max = 0;
    printf("Enter the size of array=");
    scanf("%d", &n);
    printf("Enter the %d value for maximum and minimum=",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=min=a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Max=%d\n",max);
    printf("Min=%d",min);
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
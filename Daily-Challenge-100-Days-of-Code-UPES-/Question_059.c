// Q59: Count even and odd numbers in an array.
#include<stdio.h>

int main()
{
    int a[10],n,i,e=0,o=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("The odd numbers in an array=%d",o);
    printf("\nThe even numbers in an array=%d",e);
    return 0;
}
/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include<stdio.h>

int main()
{
    int nums[30];
    int i,j,n,k;
    int pivotinteger=-1,leftsum,rightsum,pivot;

    printf("Enter the Integer :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        nums[i]=i;
    }
    

    for(i=1;i<=n;i++)
    {
        leftsum=0;
        rightsum=0;
        pivot=nums[i];
        for(j=1;j<=pivot;j++)
        {
            leftsum+=nums[j];
        }
        for(k=n;k>=pivot;k--)
        {
            rightsum+=nums[k];
        }
        if(leftsum==rightsum)
        {
            pivotinteger=i;
        }
    }
    printf("%d",pivotinteger);
    return 0;
}
/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
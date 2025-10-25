// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
/*#include<stdio.h>

int main()
{
    int arr[50];
    int i,j,n;
    int max_sum=-32765;
    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int curr_sum=0;
        for(j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(max_sum<curr_sum)
            {
                max_sum=curr_sum;
            }
        }

        
    }
    printf("%d",max_sum);
        return 0;
}*/
#include<stdio.h>

int main()
{
    int arr[50],n,i;
    int max_sum=-32765;
    int curr_sum=0;
    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum>max_sum)
        {
            max_sum=curr_sum;
        }
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
    printf("%d",max_sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
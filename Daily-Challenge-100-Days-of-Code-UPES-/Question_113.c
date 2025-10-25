// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include<stdio.h>

int main()
{
    int arr[30];
    int i,j,temp,n;
    int k;
    printf("Enter the element you want to enter:");
    scanf("%d",&n);
    printf("Enter the kth smallest element:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d ",arr[k-1]);
    return 0;
}
/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
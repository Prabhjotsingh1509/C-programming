// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include<stdio.h>

int main()
{
    int arr[10];
    int i,j,n,k;
    int c;

    printf("Enter the number of elements you want to enter:");
    scanf("%d",&n);

    printf("Enter the subarray size:");
    scanf("%d",&k);

    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=(n-k);i++)
    {
        c=0;
        for(j=i;j<(k+i);j++)
        {
            if(arr[j]<0)
            {
                printf("%d ",arr[j]);
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("0 ");
        }   
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include<stdio.h>

int main()
{
    int i,j,n;
    int arr[50];
    int sum,max=0,k;
    printf("enter the number of element you want to enter:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("size of subarrays sum:");
    scanf("%d",&k);
    for(i=0;i<=(n-k);i++)
    {
        sum=0;
        for(j=i;j<(k+i);j++)
        {
            sum+=arr[j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}
/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include<stdio.h>

int main()
{
    int m,n;
    int i,j,temp;
    int nums1[30],nums2[30],a[60];

    printf("Enter the number of element you want to enter in first array:");
    scanf("%d",&m);
    printf("Enter the number of element you want to enter in second array:");
    scanf("%d",&n);
    printf("Enter the elements of a 3rd array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&nums1[i]);
        a[i]=nums1[i];
    }
    printf("Enter the elements of a 2nd array:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&nums2[j]);
        a[i]=nums2[j];
        i++;
    }
    for(i=0;i<m+n-1;i++)
    {
        for(j=i+1;j<m+n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
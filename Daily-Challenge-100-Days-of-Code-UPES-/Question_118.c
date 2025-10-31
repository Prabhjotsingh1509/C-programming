// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include<stdio.h>

int main()
{
    int nums[30];
    int i,n;
    int numlc[31]={0};
    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
        numlc[nums[i]]++;
    }
    printf("The missing number:");
    for(i=0;i<=n;i++)
    {
        if(numlc[i] == 0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
// WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.
#include<stdio.h>

int main()
{
    int i,n,target,count=0;

    printf("Enter the number of elements you want to enter");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
    }
    printf("Enter the value whom frquency you want to know:");
    scanf("%d",&target);

    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            count++;
        }
    }
    printf("The frequency of %d : %d",target,count);
    return 0;
}
// Q69: Find the second largest element in an array.
#include<stdio.h>

int main()
{
    int n,i,a[10],first=0,second;
    printf("Enter the size of array and size must be greater than 2 :");
    scanf("%d",&n);
    if (n<2)
    return 1;
    printf("Enter the elements of an array(only positive numbers):");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        } 
        else if(a[i] > second && a[i] != first)
        {
            second = a[i];
        }   
    }
    printf("The second largest element in an array is: %d",second);  
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
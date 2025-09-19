// Q61: Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int a[10],i,n,srch_num;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&srch_num);
    for(i=0;i<n;i++)
    {
        if(a[i]==srch_num)
        {
            printf("Found at index %d",i);
            break;
        }
    }
    if(i==n)
    {
        printf("-1");
    }   
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
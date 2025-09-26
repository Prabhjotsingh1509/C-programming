// Q63: Merge two arrays.
#include<stdio.h>

int main()
{
    int a[10],b[10],c[20],i,j,n2,n1,n3;
    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&n2);
    printf("\nEnter the second array:");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j];
        i++;
    }
    n3=n1+n2;
    printf("Merge array is:");
    for(i=0;i<n3;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
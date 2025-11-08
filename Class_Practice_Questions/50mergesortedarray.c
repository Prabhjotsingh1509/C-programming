// wap to merge two sorted array into a single sorted array without creating duplicate array?
#include<stdio.h>

int main()
{
    int i,j;
    int m,n;
    int a[60],num[30];
    int temp;

    printf("Enter the number of element you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements of 1 st array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of element you want to enter in 2nd array:");
    scanf("%d",&m);

    printf("Enter the elements of 2nd array:");
    for(j=0;j<m;j++)
    {
        scanf("%d",&num[j]);
        a[i]=num[j];
        i++;
    }
    for(i=0;i<(m+n-1);i++)
    {
        for(j=i;j<(m+n);j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The merged sorted array:");
    for(i=0;i<(m+n);i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
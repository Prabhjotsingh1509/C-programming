// Q60: Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main()
{
    int pos=0,neg=0,a[10],i,n,zero=0;
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("Enter the numbers=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        pos++;
        else if(a[i]<0)
        neg++;
        else
        zero++;
    }
    printf("The positive number in an array=%d\n",pos);
    printf("The negative number in an array=%d\n",neg);
    printf("The zero in an array is %d",zero);

    return 0;
}
/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
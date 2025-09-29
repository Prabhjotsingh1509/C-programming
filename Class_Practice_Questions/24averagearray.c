// WAP  to find the average of n = 40 numbers using arrays. Convert the type of array using type conversion.
#include<stdio.h>

int main()
{
    int arr[100];
    int i,sum=0,avg;
    printf("Enter the number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    avg=sum/40;
    printf("The average of numbers:%d",avg);
    return 0;
}
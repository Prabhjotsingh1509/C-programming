// check number is positive ,negative or zero.
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the integer");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive");
    }
    else if(num<0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    return 0;
}
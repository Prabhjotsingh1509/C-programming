#include<stdio.h>

int main()
{
    int i;
    i=1;
    printf("The odd numbers are:\n");
    while(i<=100)
    {
        if(i%2!=0)
        printf("%d\n",i);
        i++;
    }
    printf("Even numbers from 1 to 100 are:\n");
    i=1;
    while(i<=100)
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }
    return 0;
    }

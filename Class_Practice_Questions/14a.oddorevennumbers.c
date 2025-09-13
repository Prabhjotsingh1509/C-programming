// wap to print : a) odd numbers b)even numbers 1 to 100
// i)for loop
#include<stdio.h>
int main()
{
    int i;
    printf("The odd numbers are:\n");
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    printf("Even numbers from 10 100 :");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }   
    return 0;
}

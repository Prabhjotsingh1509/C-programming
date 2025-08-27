#include<stdio.h>
int main()
{
    int n,i=1,c=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
        c++;
        }
        i++;
    }
    if(c==2)
    {
        printf("It is prime");
    }
    else
    printf("it is not prime");
    return 0;
}
// write the program to print the fibonacci series.
#include<stdio.h>

int main()
{
    int n,a=0,b=1,i,c;
    printf("how many terms of fibonacci series you want:");
    scanf("%d",&n);
    printf("The fibonacci series:");
    if(n>=1)
    printf("%d\t",a);
    if(n>=2)
    printf("%d\t",b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
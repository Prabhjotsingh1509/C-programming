// find the largest number using tertiary operator out of 3
#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the integer=");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest number=%d",d);
    return 0;
}
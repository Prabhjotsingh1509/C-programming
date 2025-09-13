#include<stdio.h>

int main()
{
   int a,b,c;
   printf("Enter the integer=");
   scanf("%d %d",&a,&b);
    c=(a>b?a:b);
    printf("largest number=%d",c);
    return 0;
}
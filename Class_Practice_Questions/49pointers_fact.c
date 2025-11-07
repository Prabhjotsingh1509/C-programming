//wap to find the factorial using pointers.

#include<stdio.h>

void fact(int,int *);
int main()
{
    int n,result=1;

    printf("Enter the integer:");
    scanf("%d",&n);

    fact(n,&result);
    printf("factorial of %d is %d",n,*(&result));
    return 0;
}
void fact(int n,int *r)
{
    int i=1;
    while(i<=n)
    {
        *r*=i;
        i++;
    }

}
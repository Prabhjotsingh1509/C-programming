// wap using swap function with the following function header
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a,b;
    int *x,*y;

    printf("Enter the element:");
    scanf("%d",&a);

    printf("\nEnter the element:");
    scanf("%d",&b);
    x=&a;
    y=&b;
    swap(x,y);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;

    temp =*x;
    *x=*y;
    *y=temp;
    printf("The value of a and b:%d %d",*x,*y);
}
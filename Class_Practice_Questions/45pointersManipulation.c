//pointer manipulation
#include<stdio.h>

int main()
{
    int x=10,y=20;

    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    *ptr1=*ptr2+10;

    printf("%d %d ",x,y);
}
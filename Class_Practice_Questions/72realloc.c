// realloc is used to resize the memory allocation.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int *ptr =  (int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        ptr[i]=i+1;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    ptr=(int *)realloc(ptr,9*sizeof(int));
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ptr[i*3 +j]=i+j;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",ptr[i*3 +j]);
        }
        printf("\n");
    }
    return 0;
}
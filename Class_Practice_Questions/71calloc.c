#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int *ptr=(int *)calloc(5,sizeof(int)); //contigious allocation
    // It is already intialize by 0 
    for(i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    // Output: 0 0 0 0 0
    for(i=0;i<5;i++)
    {
        ptr[i]= i+1;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    //Output is 1 2 3 4 5 
    free(ptr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>  // to call the malloc(memory Allocation) function from this header file.
// it is located in the heap memory where as array store in stack memory.
int main()
{
    int *ptr= (int *)malloc(5 * sizeof(int));
    // malloc cannot be intialize with 0 that is the main difference between the malloc and calloc.
    if(ptr == NULL)
    {
        printf("Allocation memory failed");
        return 0;
    }
    for(int i=0;i<5;i++)
    {
        ptr[i]=i+1;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}

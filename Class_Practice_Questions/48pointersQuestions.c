// Wap to access and print all elements of an integer array using pointer arthmetic instead of array indexing use:sizeof()
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr;  
    int n = sizeof(arr)/sizeof(arr[0]); 

    printf("Array elements:\n");

    for(int i =0; i <n;i++)
    {
        printf("%d ", *(p+i));   
        
    }

    return 0;
}

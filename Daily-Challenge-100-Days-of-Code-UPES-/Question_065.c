// Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int arr[10], n, i, result, target;
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = size - 1, mid;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &target);
    
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            printf("Found at index %d",mid);
        }
        if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return 0;
}
/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
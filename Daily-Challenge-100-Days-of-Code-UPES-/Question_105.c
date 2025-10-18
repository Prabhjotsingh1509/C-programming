// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main()
{
    int i, j, n;
    int c, majority;
    int arr[10];
    printf("Enter the number of element you want to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 1;
        for (j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }
        if (c > (n / 2))
        {
            printf("%d", arr[i]);
            return 0;
        }
    }
    printf("-1");

    return 0;
}
/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
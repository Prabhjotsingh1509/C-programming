// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
// O(logn) is not used because it is optional.
#include <stdio.h>

int main()
{
    int fOccurance = -1, lOccurance = -1, target;
    int n, i = 0;
    int nums[50];

    printf("Enter the number of elements you want to enter in the array:");
    scanf("%d", &n);

    printf("Enter the Elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the Target:");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
            if (nums[i] == target)
            {
                if(fOccurance==-1)
                fOccurance=i;
                lOccurance=i;
            }
    }
    printf("%d %d", fOccurance, lOccurance);
    return 0;
}
/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
// Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
    int n, i, a[10], num;
    int temp;
    printf("Size of array");
    scanf("%d", &n);
    printf("Enter the element in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Number you want to enter:");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (a[i] > num)
        {
            a[-1] = num;
            for (i = -1; i < n; i++)
            {
                printf("%d\t", a[i]);
            }
            return 0;
        }
        if (a[i] < num && a[i + 1] > num)
        {
            temp = a[i + 1];
            a[i + 1] = num;
            num = temp;
        }
    }
    printf("The new sorted array is:");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
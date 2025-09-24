// Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int n, a[10], i, pos, num;
    printf("Size of array:");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position:");
    scanf("%d", &pos);
    printf("Enter the number you want to insert:");
    scanf("%d", &num);
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = num;
    printf("The new array:");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
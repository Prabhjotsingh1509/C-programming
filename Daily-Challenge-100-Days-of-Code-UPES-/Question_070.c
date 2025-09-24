// Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main()
{
    int n, i, a[10], pos, temp, b[10], j;
    printf("Enter the size of an array(max 10):");
    scanf("%d", &n);
    printf("Enter the elements of an array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value of k position:");
    scanf("%d", &pos);
    pos = pos % n;
    for(i=n-pos;i<n;i++)
    {
        b[j] = a[i];
        j++;
    }
    for(i=0;i<n-pos;i++)
    {
        b[j] = a[i];
        j++;
    }
    for (j=0;j<n;j++)
    {
        printf("%d\t", b[j]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
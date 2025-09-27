// Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main()
{
    int r1,c1;
    int arr[100][100],i, j;
    printf("Enter the rows :");
    scanf("%d", &r1);
    printf("Enter the columns");
    scanf("%d",&c1);
    if(r1 != c1);
    return 0;
    printf("Enter the element of matrix:");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(arr[i][j] != arr [j][i])
            {
                printf("false");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
// Q79: Perform diagonal traversal of a matrix.
#include<stdio.h>

int main()
{
    int row,column,a[100][100];
    int i,j,k;

    printf("Enter the row of matrix:");
    scanf("%d",&row);

    printf("Enter the column of matrix:");
    scanf("%d",&column);

    printf("Enter the elements of an array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Diagonal Traversal Output:\n");
    for (k = 0; k <= row + column - 2; k++) {
        if (k % 2 == 0) {
            for (i = k; i >= 0; i--) {
                j = k - i;
                if (i < row && j < column)
                    printf("%d ", a[i][j]);
            }
        } else {
            for (i = 0; i <= k; i++) {
                j = k - i;
                if (i < row && j < column)
                    printf("%d ", a[i][j]);
            }
        }
    }

}
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
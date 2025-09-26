// Q74: Find the transpose of a matrix.
#include <stdio.h>

int main()
{
    int rows, columns;
    int matrix[100][100], i, j;
    printf("Enter the rows:");
    scanf("%d", &rows);
    printf("Enter the columns:");
    scanf("%d", &columns);
    printf("Enter the elements of matrix:");
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The transpose of matrix:\n");
    for(j=0;j<columns;j++)
    {
        for(i=0;i<rows;i++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
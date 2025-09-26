// Q72: Find the sum of all elements in a matrix.
#include<stdio.h>

int main()
{
    int rows,columns;
    int matrix[100][100],i,j,sum=0;
    printf("Enter the rows:");
    scanf("%d",&rows);
    printf("Enter the colums:");
    scanf("%d",&columns);
    printf("Enter the elements of matrix");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            sum+=matrix[i][j];
        }
    }
    printf("Sum of all elements in a matrix:%d",sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
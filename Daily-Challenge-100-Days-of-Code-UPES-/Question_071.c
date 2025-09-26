// Q71: Read and print a matrix.
#include<stdio.h>

int main()
{
    int rows,columns;
    int matrix[3][3],i,j;
    printf("Enter the rows:");
    scanf("%d",&rows);
    printf("Enter the columns:");
    scanf("%d",&columns);
    printf("Enter the elements of matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
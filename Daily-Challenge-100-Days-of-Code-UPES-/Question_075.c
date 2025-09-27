// Q75: Add two matrices.
#include<stdio.h>

int main()
{
    int i,j;
    int r1,r2,c1,c2;
    int Matrix1[100][100],Matrix2[100][100],SumOfMatrices[100][100];
    printf("The rows of first matrix:");
    scanf("%d",&r1);
    printf("the columns of first matrix:");
    scanf("%d",&c1);
    printf("The elements of first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&Matrix1[i][j]);
        }
    }
    printf("The rows of second matrix:");
    scanf("%d",&r2);
    printf("The columns of second matrix");
    scanf("%d",&c2);
    printf("The elements of second matrix:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&Matrix2[i][j]);
        }
    }
    if(r1 != r2 || c1 != c2)
    {
        printf("sum not possible");
        return 0;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            SumOfMatrices[i][j]=Matrix1[i][j]+Matrix2[i][j];
        }
    }
    printf("The sum of matrices:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",SumOfMatrices[i][j]);
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
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
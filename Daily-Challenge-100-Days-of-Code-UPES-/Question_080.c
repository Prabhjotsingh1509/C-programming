// Q80: Multiply two matrices.
#include<stdio.h>

int main()
{
    int i,j,k;
    int row1,row2,column1,column2;
    int matrix1[10][10],matrix2[10][10],product[10][10];

    printf("Enter the row and column of matrix1:");
    scanf("%d%d",&row1,&column1);
    printf("Enter the element of matrix1:");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
     printf("Enter the row and column of matrix1:");
    scanf("%d%d",&row2,&column2);
    printf("Enter the element of matrix1:");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            product[i][j];
            for(k=0;k<row2;k++)
            {
                product[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("The Product:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
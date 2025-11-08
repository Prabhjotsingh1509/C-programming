// wap to find the transpose and determinent of a matrix.(3 x 3) matrix
#include<stdio.h>

int main()
{
    int matrix[50][50];
    int n,i,j;
    int det;

    printf("Enter the number of rows and column of matrix");
    scanf("%d",&n);
    printf("Enter the elements of matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The transpose of an matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    det= (matrix[0][0]*((matrix[1][1]*matrix[2][2])-(matrix[1][2]*matrix[2][1]))
    -matrix[0][1]*((matrix[1][0]*matrix[2][2])-(matrix[1][2]*matrix[2][0]))
    +matrix[0][2]*((matrix[1][0]*matrix[2][1])-(matrix[1][1]*matrix[2][0])));
    printf("The determinent of an matrix:%d",det);
}
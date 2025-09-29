// Q78: Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
    int row,column,a[100][100];
    int i,j,sum=0;

    printf("Enter the row of matrix:");
    scanf("%d",&row);

    printf("Enter the column of matrix:");
    scanf("%d",&column);

    printf("Enter the elements of matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of Diagonal is : %d",sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
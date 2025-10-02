// WAP that reads two matrices A (m x n) and B (p x q) and computes the (a) sum (b) product (c) determinant of A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.
#include <stdio.h>
void display(int row,int column,int matrix[100][100]);
int det(int row, int matrix1[100][100]);
void Sum(int row, int column, int matrix1[100][100], int matrix2[100][100], int total[100][100]);
int multiply(int row,int column,int matrix1[100][100],int matrix2[100][100],int product[100][100],int n);
int main()
{
    int arr1[100][100], arr2[100][100], sum[100][100],product[100][100];
    int i = 0, j = 0;
    int row1, row2, column1, column2;
    int det1, det2;

    printf("Enter the row of first matrix:");
    scanf("%d", &row1);
    printf("Enter the column of first matrix:");
    scanf("%d", &column1);
    printf("Enter the first matrix:");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the row of second matrix:");
    scanf("%d", &row2);
    printf("Enter the column of second Matrix:");
    scanf("%d", &column2);
    printf("Enter the second matrix:");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    // sum of two matrices
    if (row1 == row2 && column2 == column1)
    {
        Sum(row1, column1, arr1, arr2, sum);
        printf("The sum of two Matrices:\n");
        display(row1,column1,sum);
    }
    else
        printf("Sum is not possible\n");

    // multiply of two matrices
    if(column1==row2)
    {
        multiply(row1,column2,arr1,arr2,product,row2);
        printf("The product of Matrix:\n");
        display(row1,column2,product);
    }
    
    // Determinant of arr1
    if (row1 == column1)
    {
        det1=det(row1, arr1);
        printf("The determinant of arr1:%d\n", det1);
    }
    if (row2 == column2)
    {
        det2=det(row2, arr2);
        printf("The determinant of arr2:%d\n", det2);
    }
    return 0;
}
//a)display
void display(int row,int column,int matrix[100][100])
{
    int i,j;
    for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    printf("\n");
}
//b)determinant
int det(int row, int arr[100][100])
{
    int deter;
    if (row == 3)
    {
        deter = 
        arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1])) - 
        arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[2][0])) + 
        arr[0][2] * ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0]));
    }
    else if (row == 2)
    {
        deter = (arr[0][0] * arr[1][1]) - (arr[1][0] * arr[0][1]);
    }
    else
    {
        deter=0;
    }
    return deter;
}
//c)sum
void Sum(int row, int column, int matrix1[100][100],
     int matrix2[100][100], int total[100][100])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            total[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
//d)multiply
int multiply(int row,int column,int matrix1[100][100],
    int matrix2[100][100],int product[100][100],int n)
{
    int i,j,k;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            product[i][j]=0;
            for(k=0;k<n;k++)
            product[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
    }
    return 0;
}
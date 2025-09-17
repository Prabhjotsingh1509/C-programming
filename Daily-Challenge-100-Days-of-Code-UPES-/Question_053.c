/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*       */
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<=3;i++)
    {
        for(j=7-(2*i);j>0;j--)
        printf("*");
        printf("\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
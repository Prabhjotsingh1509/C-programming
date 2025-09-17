/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>

int main()
{
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=3-i;j>0;j--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i<7;i++)
    {
        for(j=0;j<i-3;j++)
        {
            printf(" ");
        }
        for(j=0;j<7-i;j++)
        {
            printf("*");
        }
        for(j=0;j<6-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/





























// wap to find the points are collinear or not.

#include<stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the first point");
    scanf("%d %d",&x1,&y1);
    printf("Enter the second point");
    scanf("%d %d",&x2,&y2);
    printf("Enter the third point");
    scanf("%d %d",&x3,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)) // slope formula
    {
        printf("points are collinear");
    }
    else
    {
        printf("points are not collinear");     
    }

    return 0;
}
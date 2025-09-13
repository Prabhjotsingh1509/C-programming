//wap to print the grades obtained by a student using:
// i)if-else
#include<stdio.h>
int main()
{
    int num;

    printf("Enter the marks=");
    scanf("%d",&num);
    if(num<0 || num>100)
    {
    printf("number is invalid");
    return 0;
    } 
    else if(num>90 && num<=100)
    printf("Grade A");
    else if(num>80 && num<=90)
    printf("Grade B");
    else if(num>70 && num<=80)
    printf("Grade C");
    else if(num>60 && num<=70)
    printf("Grade D");
    else if(num>50 && num<=60)
    printf("Grade E");
    else
    printf("Fail");

    return 0;
}
    
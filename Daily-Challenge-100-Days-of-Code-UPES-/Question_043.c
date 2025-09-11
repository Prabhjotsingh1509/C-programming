// Q43: Write a program to check if a number is a strong number.
#include<stdio.h>

int main()
{
    int number,digit,j,factorial,sum=0,temp;
    printf("Enter the integer=");
    scanf("%d",&number);
    temp=number;
    while(temp>0)
    {
        digit=temp%10;
        factorial=1;
        for(j=1;j<=digit;j++)
        {
            factorial*=j;
        }
        sum+=factorial;
        temp /= 10;
    }
    printf("%d",sum);
    if(number==sum)
    printf("strong number");
    else
    printf("Not strong number");
    return 0;  
}
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
// wap to find if number is armstrong number is an armstrong( range say :11 to 775)
#include<stdio.h>
#include<math.h>


int main()
{
    int num,digit,r,sum=0,temp;
    printf("Enter the integer");
    scanf("%d",&num);
    if(num>=11 && num<=775)
    {
        printf("not in rnage");
        return 0;
    }
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        r=digit*digit*digit;
        sum=sum+r;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;       
    }
//wap to print the grades obtained by a student using:
// ii)switch case
#include<stdio.h>

int main()
{
    int n,num;
    printf("Enter the number=");
    scanf("%d",&num);
    if(num==100)
    {
        printf("Grade A");
        return 0;
    }
    n=num/10;
    switch(n)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        printf("The Grade=Fail");
        break;
        case 5:
        printf("The Grade=E");
        break;
        case 6:
        printf("The Grade=D");
        break;
        case 7:
        printf("The Grade=C");
        break;
        case 8:
        printf("The Grade=B");
        break;
        case 9:
        printf("The Grade=A");
        break;
        default:
        printf("Invalid");
        break;
    }
    return 0;
}
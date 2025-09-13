//wap to print the grades obtained by a student using:
// ii)switch case
#include<stdio.h>

int main()
{
    int n,num;
    printf("Enter the number=");
    scanf("%d",&num);
    n=num/10;
    switch(n)
    {
        case 10:
        printf("Grade A");
        break;
        case 9:
        printf("Grade B");
        break;
        case 8:
        printf("Grade C");
        break;
        case 7:
        printf("Grade D");
        break;
        case 6:
        printf("Grade E");
        break;
        case 5:
        printf("Grade F");
        break;
        default:
        printf("Fail");
        break;
    }
    return 0;
}
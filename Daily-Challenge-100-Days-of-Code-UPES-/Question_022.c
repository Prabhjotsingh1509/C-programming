// Q22: Write a program to find profit or loss percentage given cost price and selling price.//
#include <stdio.h>
int main()
{
    //(p/cp)*100//
    float cp, sp, profitper, lossper;
    printf("Enter the cost price=");
    scanf("%f", &cp);
    printf("Enter the selling price=");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profitper = ((sp - cp) / cp) * 100;
        printf("profit %f", profitper);
    }
    else if (cp > sp)
    {
        lossper = ((cp - sp) / cp) * 100;
        printf("loss %f",lossper);
    }
    else
    printf("nor profit nor loss");

    return 0;
}

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
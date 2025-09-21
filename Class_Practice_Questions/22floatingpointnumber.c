// WAP program to raise a floating point number to an integer power. use user defined function such as power.
#include<stdio.h>

void power(float base,int exp);
int main()
{
    int exp;
    float base;
    printf("Enter a floating point number=");
    scanf("%f",&base);
    printf("Enter the exponent power=");
    scanf("%d",&exp);
    power(base,exp);
    return 0;
}
void power(float base,int exp)
{
    int i;
    float ans=1;
    for(i=1;i<=exp;i++)
    {
        ans=ans*base;
    }
    printf("%f^%d=%f", base, exp, ans);

}